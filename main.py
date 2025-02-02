import os
import re
import openpyxl

from domain import check_app_version
from enum import Enum

#todo: Версия приложения
#todo: забрать версию проекта и на ее основе создать файл эксель
#todo: из коллекции созданых строк создать эксель фаил
#todo: разложить код по модулям

class Param:
    def __init__(self):
        self.code = 0  # Класс числовой
        self.name = ""  # название текстовое
        self.value = None  # значение пустое
        self.units = ""  # Единицы измерения текстовое
        self.type = ParamType.STR  # тип строковый
        self.view = ParamView.DEC  # Вид строковый
        self.address = 0  # адрес числовой
        self.record = 0  # Запись числовой
        self.min_value = 0  # Минимум числовой
        self.max_value = 0  # максимум числовой
        self.factory_setting = 0  # Заводская уставка числовой
        self.coefficient = 0  # коэффициент числовой
        self.size = 0  # размер числовой
        self.rows = ""  # Строки текстовый
        self.description = ""  # Описание текстовый
        self.hidden = 0  # скрытый числовой
        self.code = ""  # Код текстовый
        self.method = ""  # Методика проверки текстовый
        self.comments_user = ""  # Комментарии для пользователя текстовый
        self.comments_dev = ""  # Комментарии для разработчика текстовый
        self.recommendations = ""  # Рекомендации (что делать, если не работает) текстовый
        self.additional = ""  # Дополнительно текстовый
        self.date_changed = ""  # Дата изменения текстовый
        self.author = ""  # Автор текстовый

def create_exel_file(excel_file):
    """
    Создание файла Excel с 8 строками данных и указанными заголовками.
    """
    
    wb = openpyxl.Workbook()
    # Select the first sheet
    sheet = wb.active
    
    # Set the header row
    headers = [
        "Код",
        "Название",
        "Значение",
        "Ед. изм.",
        "Тип",
        "Вид",
        "Адрес",
        "Запись",
        "Мин.",
        "Макс.",
        "Завод. установ.",
        "Коэф-т",
        "Размер",
        "Строки",
        "Описание стр. значений/битов",
        "Скрытый",
        "Описание",
        "Комментарии для пользователя",
        "Методика проверки",
        "Комментарии для разработчика",
        "Рекомендации (что делать, если не работает)",
        "Дополнительно",
        "Дата изменения",
        "Автор"
        ]
    
   # Write the headers to the first row
    for i, header in enumerate(headers):
        cell = sheet.cell(row=1, column=i+1)
        cell.value = header
        cell.font = openpyxl.styles.Font(bold=True)
        cell.fill = openpyxl.styles.PatternFill(start_color='0000FF', end_color='0000FF', fill_type='solid')
        cell.alignment = openpyxl.styles.Alignment(horizontal='center')
        
     # Create 8 rows with data
    data = [
        ["0", "А Диагностика системы"],
        ["1", "В Параметры пользователя"],
        ["2", "С Заводские параметры"],
        ["3", "D Команды управления"],
        ["4", "G. Параметры теста"],
        ["5", "H. Скрытые параметры"],
        ["6", "T. Технологический регистр"],
        ["7", "E Журнал событий"]
    ]
    
    for i, row in enumerate(data):
        for j, value in enumerate(row):
            cell = sheet.cell(row=i+2, column=j+1)
            cell.value = value
    
    # Set the width of each column to the width of the text
    for i, header in enumerate(headers):
        sheet.column_dimensions[openpyxl.utils.get_column_letter(i+1)].width = len(header) * 1.2
    
    wb.save(excel_file)

def create_file(filename: str, text: str) -> None:
    """
    Создание файла с указанным именем и текстом.
    
    Args:
        filename (str): Имя файла для создания.
        text (str): Текст для записи в файл.
    """
    with open(filename, "w", encoding="utf-8") as f:
        f.write(text)
# ready
def find_file():
    """
    Поиск файла 'params.h' или 'menu_params.h' в текущем каталоге и его
    подкаталогах.

    Returns:
        str: Путь найденного файла или None, если файл не найден
    """
    filenames = ["params.h", "menu_params.h"]
    for filename in filenames:
        # Walk through the directory tree
        for root, dirs, files in os.walk("."):
            # Check if the current filename is in the list of files
            if filename in files:
                return os.path.join(root, filename)

    # File not found in any directory
    print("Error: Neither 'params.h' nor 'menu_params.h' found")
    return None
# ready
def parse_strings(file_path, start_line_number):
    with open(file_path, 'r', encoding='Windows-1251') as file:
        content = file.read()

    # Находим блок между //! Строки и //! Строки конец
    start_marker = "//! Строки"
    end_marker = "//! Строки конец"
    start_index = content.find(start_marker)
    end_index = content.find(end_marker)

    if start_index == -1 or end_index == -1:
        print("Error: String markers not found")
        return []

    string_block = content[start_index:end_index]

    # Удаляем блоки между #if BUR_M и #else
    string_block = re.sub(r'#if BUR_M.*?#else', '', string_block, flags=re.DOTALL)
    # Удаляем оставшиеся #if BUR_M, #else, #endif
    string_block = re.sub(r'#if BUR_M|#else|#endif', '', string_block)

    # Разделяем на участки по //!----------------
    sections = re.split(r'//!----------------', string_block)

    result = []
    found_start = False  # Флаг, чтобы начать добавление строк после нахождения start_line_number

    for section in sections:
        # Ищем все строки в формате "   НЕТ АВАРИЙ   ", // 35
        matches = re.findall(r'"(.*?)", // (\d+)', section)
        current_index = 0  # Нумерация с 0 для каждого раздела

        for match in matches:
            text, line_number = match
            line_number = int(line_number)  # Преобразуем номер строки в число

            # Если нашли строку с номером start_line_number или больше, начинаем добавлять
            if line_number >= start_line_number:
                found_start = True

            if found_start:
                result.append(f"{current_index}-{text.strip()};")  # Добавляем точку с запятой
                current_index += 1

        # Если нашли строки, добавляем разделитель и завершаем обработку
        if found_start:
            break

    return result

def parse_groups(file_path):
    """
    Парсит группы между //! Группы и //! Группы конец.
    Преобразует строки в формат "ГРУППА X НАЗВАНИЕ".

    Args:
        file_path (str): Путь к файлу.

    Returns:
        list: Список групп в формате "ГРУППА X НАЗВАНИЕ".
    """
    with open(file_path, 'r', encoding='Windows-1251') as file:
        content = file.read()

    # Находим блок между //! Группы и //! Группы конец
    start_marker = "//! Группы"
    end_marker = "//! Группы конец"
    start_index = content.find(start_marker)
    end_index = content.find(end_marker)

    if start_index == -1 or end_index == -1:
        print("Error: Group markers not found")
        return []

    group_block = content[start_index:end_index]

    # Ищем все строки в формате "   4 ГРУППА D   ", "    КОМАНДЫ     ", GR_INIT(GroupD, 0),
    matches = re.findall(r'\"\s*(\d+)\s*ГРУППА\s*(\w+)\s*\"\s*,\s*\"\s*([^\"]+)\s*\"', group_block)

    groups = []
    for match in matches:
        group_number, group_name, group_description = match
        # Формируем строку в формате "ГРУППА X НАЗВАНИЕ"
        group_str = f"ГРУППА {group_name} {group_description.strip()}"
        groups.append(group_str)

    return groups

def get_group_index(groups, group_name):
    """
    Возвращает индекс группы (начиная с 0) по её названию.

    Args:
        groups (list): Список групп.
        group_name (str): Название группы (например, "ГРУППА D КОМАНДЫ").

    Returns:
        int: Индекс группы или -1, если группа не найдена.
    """
    for index, group in enumerate(groups):
        if group_name in group:
            return index
    return -1

def main():
    """
    Главная функция программы.

    Эта функция вызывается, когда программа запускается из
    командной строки. Она содержит основную логику программы и
    отвечает за выполнение задач, указанных в аргументах
    командной строки.

    Args:
        None

    Returns:
        None
    """
    # Create a text file with the specified text
    #create_file("test.txt", " ")

    # Search for specific files in the current directory and its subdirectories
    file_path = find_file()
    
    if file_path:
        # Парсим группы
        groups = parse_groups(file_path)
        for group in groups:
            print(group)

        # Пример получения индекса группы
        group_name = "ГРУППА E ЖУРНАЛ"
        group_index = get_group_index(groups, group_name)
        print(f"Индекс группы '{group_name}': {group_index}")
    
    # Create an name of the Excel file
    #excel_file = "example.xlsx"
    # Create an Excel file
    #create_exel_file(excel_file)
    # Parse the file
    #parse_file(file_path, excel_file)

    # Get the current version of the application
    version = check_app_version()
    print(version)
    
    
if __name__ == "__main__":
    main()

