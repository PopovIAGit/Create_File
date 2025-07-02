import re

class ParameterParser:
    def __init__(self, file_path, modification=None):
        self.file_path = file_path
        self.modification = modification
        self.parameters = {}
        self.current_group = None
        self.block_stack = []
        self.inside_correct_block = True

    def parse(self):
        """Основной метод для парсинга параметров."""
        content = self._read_file()
        parameter_block = self._extract_parameter_block(content)
        if not parameter_block:
            return {}
        
        lines = parameter_block.splitlines()
        for line in lines:
            line = line.strip()
            self._process_preprocessor_directives(line)
            if self.current_group and self.inside_correct_block:
                self._process_parameter_line(line)
        
        return self.parameters

    def _read_file(self):
        """Читает содержимое файла."""
        with open(self.file_path, 'r', encoding='Windows-1251') as file:
            return file.read()

    def _extract_parameter_block(self, content):
        """Извлекает блок параметров между маркерами."""
        start_marker = "//! Параметры"
        end_marker = "//! Параметры конец"
        start_index = content.find(start_marker)
        end_index = content.find(end_marker)

        if start_index == -1 or end_index == -1:
            print("Error: Parameter markers not found")
            return None
        
        return content[start_index:end_index]

    def _process_preprocessor_directives(self, line):
        """Обрабатывает директивы препроцессора (#if, #else, #endif)."""
        if line.startswith('#if'):
            self._handle_if_directive(line)
        elif line.startswith('#else'):
            self._handle_else_directive()
        elif line.startswith('#endif'):
            self._handle_endif_directive()
        elif line.startswith('//! ГРУППА'):
            self._handle_group_directive(line)

    def _handle_if_directive(self, line):
        """Обрабатывает директиву #if."""
        current_active = all(self.block_stack) if self.block_stack else True
        if current_active:
            if self.modification is not None:
                condition_met = any(
                    mod_name in line and mod_value 
                    for mod_name, mod_value in self.modification
                ) if isinstance(self.modification, (list, tuple)) else (
                    self.modification[0] in line and self.modification[1] 
                    if isinstance(self.modification, tuple) 
                    else (self.modification in line)
                )
                self.block_stack.append(condition_met)
            else:
                self.block_stack.append(True)
        else:
            self.block_stack.append(False)
        
        self.inside_correct_block = all(self.block_stack)

    def _handle_else_directive(self):
        """Обрабатывает директиву #else."""
        if self.block_stack:
            parent_active = all(self.block_stack[:-1]) if len(self.block_stack) > 1 else True
            if parent_active:
                self.block_stack[-1] = not self.block_stack[-1]
            self.inside_correct_block = all(self.block_stack)

    def _handle_endif_directive(self):
        """Обрабатывает директиву #endif."""
        if self.block_stack:
            self.block_stack.pop()
            self.inside_correct_block = all(self.block_stack)

    def _handle_group_directive(self, line):
        """Обрабатывает объявление группы параметров."""
        group_pattern = re.compile(r'//! ГРУППА (\w+) ([^{]+)')
        group_match = group_pattern.match(line)
        if group_match:
            self.current_group = group_match.group(2).strip()
            self.parameters[self.current_group] = []

    def _process_parameter_line(self, line):
        """Обрабатывает строку с параметром."""
        param_pattern = re.compile(
            r'\"([^\"]+)\"\s*,\s*\"([^\"]*)\"\s*,\s*([^,]+)\s*,\s*([^,]+)\s*,\s*([^,]+)\s*,\s*([^,]+)\s*(?:,\s*//\s*{\s*(\d+)\s*,\s*([^,}]+)\s*,\s*([^,}]+)\s*(?:,\s*([^}]+))?\s*}\s*)?'
        )
        param_match = param_pattern.search(line)
        if param_match:
            param_info = self._extract_parameter_info(param_match)
            self.parameters[self.current_group].append(param_info)

    def _extract_parameter_info(self, param_match):
        """Извлекает информацию о параметре из совпадения regex."""
        param_name = param_match.group(1).strip()
        param_unit = param_match.group(2).strip()
        min_value = param_match.group(3).strip()
        max_value = param_match.group(4).strip()
        default_value = param_match.group(5).strip()
        encoding = param_match.group(6).strip()
        address = param_match.group(7)
        appointment = param_match.group(8) if param_match.group(8) else None
        chosen = param_match.group(9).strip() if param_match.group(9) else None

        group_index, param_number, param_name_cleaned = self._parse_param_name(param_name)

        return {
            "group_index": group_index,
            "param_number": param_number,
            "param_name": param_name_cleaned,
            "unit": param_unit,
            "min_value": min_value,
            "max_value": max_value,
            "default_value": default_value,
            "encoding": encoding,
            "address": address.strip() if address else None,
            "appointment": appointment.strip() if appointment else None,
            "chosen": chosen
        }

    def _parse_param_name(self, param_name):
        """Разбирает имя параметра на составные части."""
        param_name_pattern = re.compile(r'([А-Яа-яA-Za-z]+)(\d+)\.(.+)')
        param_name_match = param_name_pattern.match(param_name)
        if param_name_match:
            return (
                param_name_match.group(1),
                param_name_match.group(2),
                param_name_match.group(3).strip()
            )
        return None, None, param_name




