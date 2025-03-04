import os
import re
from tkinter import NO, SE
#import openpyxl
#from openpyxl.styles import Font, PatternFill, Alignment

import xlwt

import xml.etree.ElementTree as ET
from xml.dom import minidom
import re

from pathlib import Path

from Crypto.Cipher import DES3
from Crypto.Util.Padding import pad, unpad
from Crypto.Random import get_random_bytes

from domain.base import check_app_version
from enum import Enum

from typing import List, Dict, Optional

from pathlib import Path

#todo: забрать версию проекта и на ее основе создать имя файла эксель
#todo: 

class Param:
    def __init__(self):
        self.code = 0  # Класс числовой
        self.name = ""  # название текстовое
        self.value = None  # значение пустое
        self.units = ""  # Единицы измерения текстовое
        self.type = ""  # тип строковый может быть "UNION", "UINT16", "INT16", "STR", "TIME", "DATE"
        self.view = ""   # Вид строковый может быть "DEC", "HEX", "BIN"
        self.address = 0  # адрес числовой
        self.record = 0  # Запись числовой
        self.min_value = 0  # Минимум числовой
        self.max_value = 0  # максимум числовой
        self.factory_setting = 0  # Заводская уставка числовой
        self.coefficient = 0  # коэффициент числовой
        self.size = 0  # размер числовой всегла 2
        self.rows = ""  # Строки текстовый
        self.description = ""  # Описание текстовый
        self.hidden = 0  # скрытый числовой
        self.method = ""  # Методика проверки текстовый
        self.comments_user = ""  # Комментарии для пользователя текстовый
        self.comments_dev = ""  # Комментарии для разработчика текстовый
        self.recommendations = ""  # Рекомендации (что делать, если не работает) текстовый
        self.additional = ""  # Дополнительно текстовый
        self.date_changed = ""  # Дата изменения текстовый
        self.author = ""  # Автор текстовый
        self.appointment = "" #
        self.chosen = "" #
'''
def create_excel_file(excel_file, param_objects, groups):
    """
    Создание файла Excel на основе массива объектов Param и данных о группах.

    Args:
        excel_file (str): Путь к выходному файлу Excel.
        param_objects (list): Список объектов Param.
        groups (list): Список групп.
    """
    # Создаем новую книгу Excel
    wb = openpyxl.Workbook()
    sheet = wb.active
    sheet.title = "Parameters"

    # Заголовки столбцов
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

    # Записываем заголовки в первую строку
    for i, header in enumerate(headers):
        cell = sheet.cell(row=1, column=i + 1)
        cell.value = header
        cell.font = Font(bold=True)
        cell.fill = PatternFill(start_color="67a0ef", end_color="67a0ef", fill_type="solid")
        cell.alignment = Alignment(horizontal="center")

    # Заполняем данные
    row_index = 2  # Начинаем с второй строки (первая строка — заголовки)

    # Группируем параметры по группам
    grouped_params = {}
    for param in param_objects:
        group_code = param.code.split(".")[0]  # Извлекаем номер группы из кода
        if group_code not in grouped_params:
            grouped_params[group_code] = []
        grouped_params[group_code].append(param)

    # Заливка для строки с группой (салатовый цвет)
    group_fill = PatternFill(start_color="09c850", end_color="09c850", fill_type="solid")

    # Записываем группы и их параметры
    for group in groups:
        group_number = group["group_number"]
        group_index = group["group_index"]
        group_description = group["group_description"]

        # Записываем номер группы и её название в столбцы 1 и 2
        sheet.cell(row=row_index, column=1, value=group_number)
        sheet.cell(row=row_index, column=2, value= group_index + ". " + group_description)

        # Подкрашиваем строку с группой салатовым цветом
        for col in range(1, len(headers) + 1):
            sheet.cell(row=row_index, column=col).fill = group_fill

        row_index += 1

        # Записываем параметры этой группы
        if group_number in grouped_params:
            for param in grouped_params[group_number]:
                sheet.cell(row=row_index, column=1, value=param.code)
                sheet.cell(row=row_index, column=2, value=param.name)
                sheet.cell(row=row_index, column=3, value=param.value)
                sheet.cell(row=row_index, column=4, value=param.units)
                sheet.cell(row=row_index, column=5, value=param.type)
                sheet.cell(row=row_index, column=6, value=param.view)
                sheet.cell(row=row_index, column=7, value=param.address)
                sheet.cell(row=row_index, column=8, value=param.record)
                sheet.cell(row=row_index, column=9, value=param.min_value)
                sheet.cell(row=row_index, column=10, value=param.max_value)
                sheet.cell(row=row_index, column=11, value=param.factory_setting)
                sheet.cell(row=row_index, column=12, value=param.coefficient)
                sheet.cell(row=row_index, column=13, value=param.size)
                sheet.cell(row=row_index, column=14, value=param.rows)
                sheet.cell(row=row_index, column=15, value=param.description)
                sheet.cell(row=row_index, column=16, value=param.hidden)
                sheet.cell(row=row_index, column=17, value=param.method)
                sheet.cell(row=row_index, column=18, value=param.comments_user)
                sheet.cell(row=row_index, column=19, value=param.comments_dev)
                sheet.cell(row=row_index, column=20, value=param.recommendations)
                sheet.cell(row=row_index, column=21, value=param.additional)
                sheet.cell(row=row_index, column=22, value=param.date_changed)
                sheet.cell(row=row_index, column=23, value=param.author)
                row_index += 1

    # Автоматическое выравнивание ширины столбцов
    for col in sheet.columns:
        max_length = 0
        column = col[0].column_letter  # Получаем букву столбца
        for cell in col:
            try:
                if len(str(cell.value)) > max_length:
                    max_length = len(str(cell.value))
            except:
                pass
        adjusted_width = (max_length + 2) * 1.2
        sheet.column_dimensions[column].width = adjusted_width

    # Сохраняем файл
    wb.save(excel_file)
    print(f"Файл {excel_file} успешно создан.")
'''

def create_excel_file(excel_file, param_objects, groups):
    """
    Создание файла Excel на основе массива объектов Param и данных о группах.

    Args:
        excel_file (str): Путь к выходному файлу Excel.
        param_objects (list): Список объектов Param.
        groups (list): Список групп.
    """
    # Создаем новую книгу Excel
    wb = xlwt.Workbook()
    sheet = wb.add_sheet("Parameters")

    # Заголовки столбцов
    headers = [
        "Код", "Название", "Значение", "Ед. изм.", "Тип", "Вид", "Адрес", "Запись", "Мин.", "Макс.",
        "Завод. установ.", "Коэф-т", "Размер", "Строки", "Описание стр. значений/битов", "Скрытый",
        "Описание", "Комментарии для пользователя", "Методика проверки", "Комментарии для разработчика",
        "Рекомендации (что делать, если не работает)", "Дополнительно", "Дата изменения", "Автор"
    ]

    # Стили для заголовков и групп
    header_style = xlwt.easyxf('font: bold on; align: horiz center; pattern: pattern solid, fore_colour light_blue;')
    group_style = xlwt.easyxf('pattern: pattern solid, fore_colour light_green;')

    # Записываем заголовки в первую строку
    for i, header in enumerate(headers):
        sheet.write(0, i, header, header_style)

    # Заполняем данные
    row_index = 1  # Начинаем с второй строки (первая строка — заголовки)

    # Группируем параметры по группам
    grouped_params = {}
    for param in param_objects:
        group_code = param.code.split(".")[0]  # Извлекаем номер группы из кода
        if group_code not in grouped_params:
            grouped_params[group_code] = []
        grouped_params[group_code].append(param)

    # Записываем группы и их параметры
    for group in groups:
        group_number = group["group_number"]
        group_index = group["group_index"]
        group_description = group["group_description"]

        # Записываем номер группы и её название в столбцы 1 и 2
        sheet.write(row_index, 0, group_number, group_style)
        sheet.write(row_index, 1, f"{group_index}. {group_description}", group_style)

        # Применяем стиль группы ко всей строке
        for col in range(2, len(headers)):  # Начинаем с третьего столбца, так как первые два уже заполнены
            sheet.write(row_index, col, "", group_style)

        row_index += 1  # Переходим на следующую строку для параметров

        # Записываем параметры этой группы
        if group_number in grouped_params:
            for param in grouped_params[group_number]:
                sheet.write(row_index, 0, param.code)
                sheet.write(row_index, 1, param.name)
                sheet.write(row_index, 2, param.value)
                sheet.write(row_index, 3, param.units)
                sheet.write(row_index, 4, param.type)
                sheet.write(row_index, 5, param.view)
                sheet.write(row_index, 6, param.address)
                sheet.write(row_index, 7, param.record)
                sheet.write(row_index, 8, param.min_value)
                sheet.write(row_index, 9, param.max_value)
                sheet.write(row_index, 10, param.factory_setting)
                sheet.write(row_index, 11, param.coefficient)
                sheet.write(row_index, 12, param.size)
                sheet.write(row_index, 13, param.rows)
                sheet.write(row_index, 14, param.description)
                sheet.write(row_index, 15, param.hidden)
                sheet.write(row_index, 16, param.method)
                sheet.write(row_index, 17, param.comments_user)
                sheet.write(row_index, 18, param.comments_dev)
                sheet.write(row_index, 19, param.recommendations)
                sheet.write(row_index, 20, param.additional)
                sheet.write(row_index, 21, param.date_changed)
                sheet.write(row_index, 22, param.author)
                sheet.write(row_index, 23, param.appointment)
                sheet.write(row_index, 24, param.chosen)
                row_index += 1  # Переходим на следующую строку для следующего параметра

    # Сохраняем файл
    wb.save(excel_file)
    print(f"Файл {excel_file} успешно создан.")
          

# ready
def find_version_file():
    """
    Поиск файла 'project_version.h' или 'config.h' в текущем каталоге и его подкаталогах.

    Returns:
        str: Путь к найденному файлу или None, если файл не найден.
    """
    # Имена файлов, которые мы ищем
    filenames = ["project_version.h", "config.h"]

    # Используем Path для работы с путями
    current_directory = Path(".")

    # Рекурсивно ищем файлы в текущем каталоге и его подкаталогах
    for filename in filenames:
        for file_path in current_directory.rglob(filename):
            if file_path.is_file():
                return str(file_path)  # Возвращаем путь как строку

    # Если ни один файл не найден
    print("Ошибка: Ни один из файлов 'project_version.h' или 'config.h' не найден.")
    return None

def find_modefication_file():
    """
    Поиск файла 'device_modification.h' в текущем каталоге и его подкаталогах.

    Returns:
        str: Путь к найденному файлу или None, если файл не найден.
    """
    # Имя файла, который мы ищем
    filename = "device_modification.h"

    # Используем Path для работы с путями
    current_directory = Path(".")

    # Рекурсивно ищем файл в текущем каталоге и его подкаталогах
    for file_path in current_directory.rglob(filename):
        if file_path.is_file():
            return str(file_path)  # Возвращаем путь как строку

    # Если файл не найден
    print(f"Ошибка: Файл '{filename}' не найден.")
    return None

def find_device_id(file_path):
    """
    Ищет значение DEVICE_ID в файле.

    Args:
        file_path (str): Путь к файлу.

    Returns:
        int: Значение DEVICE_ID или None, если значение не найдено.
    """
    try:
        with open(file_path, "r", encoding='Windows-1251') as file:
            lines = file.readlines()  # Читаем все строки сразу
            for line in lines:
                match = re.search(r'#define\s+DEVICE_ID\s+([\d]+)[\s\t]*//.*$', line)  # Регулярное выражение
                if match:
                    return str(match.group(1))
        print("Значение DEVICE_ID не найдено.")
        return None
    except FileNotFoundError:
        print(f"Ошибка: файл {file_path} не найден.")
        return None
    except Exception as e:
        print(f"Ошибка при чтении файла: {e}")
        return None



def find_param_file():
    """
    Поиск файла 'params.h' или 'menu_params.h' в текущем каталоге и его подкаталогах.

    Returns:
        str: Путь к найденному файлу или None, если файл не найден.
    """
    # Имена файлов, которые мы ищем
    filenames = ["params.h", "menu_params.h"]

    # Используем Path для работы с путями
    current_directory = Path(".")

    # Рекурсивно ищем файлы в текущем каталоге и его подкаталогах
    for filename in filenames:
        for file_path in current_directory.rglob(filename):
            if file_path.is_file():
                return str(file_path)  # Возвращаем путь как строку

    # Если ни один файл не найден
    print("Ошибка: Ни один из файлов 'params.h' или 'menu_params.h' не найден.")
    return None

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
        matches = re.findall(r'"(.*?)",\s*//\s*(\d+)', section)
        print(matches)
        current_index = 0  # Нумерация с 0 для каждого раздела

        for match in matches:
            text, line_number = match
            line_number = int(line_number)  # Преобразуем номер строки в число

            # Если нашли строку с номером start_line_number или больше, начинаем добавлять
            if line_number >= start_line_number:
                found_start = True

            if found_start:
                result.append(f"{current_index}-{text.strip()}")  # Добавляем точку с запятой
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
    matches = re.findall(
        r'\"\s*(\d+)\s*ГРУППА\s*(\w+)\s*\"\s*,\s*\"\s*([^\"]*?)\s*\"\s*,\s*GR_INIT\(([^,]+),\s*(\d+)\)\s*(?:,)?\s*//\s*{([^}]+)}',
        group_block
    )

    groups = []
    for match in matches:
        group_number = match[0].strip()  # Номер группы (например, "1")
        group_index = match[1].strip()   # Индекс группы (например, "A")
        group_description = match[2].strip()  # Описание группы (например, "ИНДИКАЦИЯ")
        gr_init_arg1 = match[3].strip()  # Первый аргумент GR_INIT (например, "GroupA")
        gr_init_arg2 = match[4].strip()  # Второй аргумент GR_INIT (например, "0")
        group_type = match[5].strip()    # Тип группы (например, "Show")

        group_dict = {
            "group_number": group_number,
            "group_index": group_index,
            "group_description": group_description,
            "gr_init_arg1": gr_init_arg1,
            "gr_init_arg2": gr_init_arg2,
            "group_type": group_type
        }
        groups.append(group_dict)

    return groups


def extract_group_data(match: tuple) -> Optional[Dict[str, Optional[str]]]:
    """
    Извлекает данные группы из совпадения регулярного выражения.

    Args:
        match (tuple): Кортеж с данными группы.

    Returns:
        dict: Словарь с данными группы или None, если данные некорректны.
    """
    try:
        group_number = match[0].strip()  # Номер группы (например, "1")
        group_index = match[1].strip()   # Индекс группы (например, "A")
        group_description = match[2].strip()  # Описание группы (например, "ИНДИКАЦИЯ")
        gr_init_arg1 = match[3].strip()  # Первый аргумент GR_INIT (например, "GroupA")
        gr_init_arg2 = match[4].strip()  # Второй аргумент GR_INIT (например, "0")
        group_type = match[5].strip()    # Тип группы (например, "Show")

        return {
            "group_number": group_number,
            "group_index": group_index,
            "group_description": group_description,
            "gr_init_arg1": gr_init_arg1,
            "gr_init_arg2": gr_init_arg2,
            "group_type": group_type
        }
    except Exception as e:
        logging.error(f"Ошибка при извлечении данных группы: {e}")
        return None

def parse_parameters(file_path):
    """
    Парсит параметры между //! Параметры и //! Параметры конец.
    Группирует параметры по группам и извлекает:
    - имя
    - размерность
    - минимальное значение
    - максимальное значение
    - значение по умолчанию
    - кодировку (обрабатывается отдельно)
    - адрес параметра

    Args:
        file_path (str): Путь к файлу.

    Returns:
        dict: Словарь, где ключ — название группы, а значение — список параметров.
              Каждый параметр представлен словарем с полями:
              - group_index: индекс группы (например, "Т")
              - param_number: номер параметра (например, "0")
              - param_name: имя параметра (например, "ТЕХНОЛ. РЕГ.")
              - unit: размерность
              - min_value: минимальное значение
              - max_value: максимальное значение
              - default_value: значение по умолчанию
              - encoding: кодировка (сырая строка, для дальнейшей обработки)
              - address: адрес параметра
              - appointment: назначение параметра
    """
    with open(file_path, 'r', encoding='Windows-1251') as file:
        content = file.read()

    # Находим блок между //! Параметры и //! Параметры конец
    start_marker = "//! Параметры"
    end_marker = "//! Параметры конец"
    start_index = content.find(start_marker)
    end_index = content.find(end_marker)

    if start_index == -1 or end_index == -1:
        print("Error: Parameter markers not found")
        return {}

    parameter_block = content[start_index:end_index]

    # Регулярное выражение для поиска групп и параметров
    group_pattern = re.compile(r'//! ГРУППА (\w+) ([^{]+)')
    param_pattern = re.compile(
        r'\"([^\"]+)\"\s*,\s*\"([^\"]*)\"\s*,\s*([^,]+)\s*,\s*([^,]+)\s*,\s*([^,]+)\s*,\s*([^,]+)\s*(?:,\s*//\s*{\s*(\d+)\s*,\s*([^,}]+)\s*,\s*([^,}]+)\s*}\s*)?'
    )

    # Регулярное выражение для разбиения param_name на части
    # Поддерживает русские и латинские буквы для индекса группы
    param_name_pattern = re.compile(r'([А-Яа-яA-Za-z]+)(\d+)\.(.+)')

    # Словарь для хранения параметров по группам
    parameters = {}
    current_group = None

    # Разделяем блок на строки
    lines = parameter_block.splitlines()

    for line in lines:
        # Проверяем, является ли строка началом новой группы
        group_match = group_pattern.match(line.strip())
        if group_match:
            current_group = group_match.group(2).strip()  # Название группы
            parameters[current_group] = []
            continue

        # Если текущая группа определена, ищем параметры
        if current_group:
            param_match = param_pattern.search(line)
            if param_match:
                param_name = param_match.group(1).strip()  # Имя параметра
                param_unit = param_match.group(2).strip()  # Размерность (может быть пустой)
                min_value = param_match.group(3).strip()  # Минимальное значение
                max_value = param_match.group(4).strip()  # Максимальное значение
                default_value = param_match.group(5).strip()  # Значение по умолчанию
                encoding = param_match.group(6).strip()  # Кодировка
                address = param_match.group(7).strip() if param_match.group(7) else None  # Адрес параметра
                appointment = param_match.group(8).strip() if param_match.group(8) else None  # Назначение параметра
                chosen = param_match.group(9).strip() if param_match.group(9) else None  # Назначение параметра

                # Разбиваем param_name на части
                param_name_match = param_name_pattern.match(param_name)
                if param_name_match:
                    group_index = param_name_match.group(1)  # Индекс группы (например, "Т")
                    param_number = param_name_match.group(2)  # Номер параметра (например, "0")
                    param_name_cleaned = param_name_match.group(3).strip()  # Имя параметра (например, "ТЕХНОЛ. РЕГ.")
                else:
                    # Если формат не совпадает, оставляем исходное имя
                    group_index = None
                    param_number = None
                    param_name_cleaned = param_name

                # Добавляем параметр в текущую группу
                parameters[current_group].append({
                    "group_index": group_index,
                    "param_number": param_number,
                    "param_name": param_name_cleaned,
                    "unit": param_unit,
                    "min_value": min_value,
                    "max_value": max_value,
                    "default_value": default_value,
                    "encoding": encoding,
                    "address": address,
                    "appointment": appointment,
                    "chosen": chosen
                })

    return parameters

def create_param_objects(file_path):
    """
    Создает массив объектов Param на основе данных из файла.

    Args:
        file_path (str): Путь к файлу.

    Returns:
        list: Список объектов Param.
    """
    # Получаем данные из парсеров
    groups = parse_groups(file_path)
    parameters = parse_parameters(file_path)

    

    # Создаем массив объектов Param
    param_objects = []

    for group in groups:
        group_number = group["group_number"]
        group_index = group["group_index"]
        group_description = group["group_description"]

        param_counter = 0  # Инициализируем счетчик 

        if group_description in parameters:
            for param in parameters[group_description]:
                param_obj = Param()

                # Заполняем поля                                
                
                param_obj.code = f"{group_number}.{param_counter}"
                param_counter += 1  # Увеличиваем счетчик

                if param["param_number"] is None:
                    param_obj.name = f"{param['param_name']}"
                else:
                    param_obj.name = f"{param['group_index']}{param['param_number']}.{param['param_name']}"
                                  
                param_obj.units = param["unit"]
                param_obj.address = str(param["address"]) if param["address"] else ""
                param_obj.view = "DEC"  
                
                # Очищаем и преобразуем числовые значения
                param_obj.min_value = clean_number(param["min_value"])
                param_obj.max_value = clean_number(param["max_value"])
                param_obj.factory_setting = clean_number(param["default_value"])
                param_obj.size = "2"

                # Определяем тип
                encoding = param["encoding"]
                if "MT_RUN" in encoding or "M_RUNS" in encoding:
                    param_obj.type = "UNION"
                elif "MT_DEC" in encoding or "MT_BIN" in encoding or "M_RMAX" in encoding:
                    if "M_SIGN" in encoding:
                        param_obj.type = "INT16"
                    else:
                        param_obj.type = "UINT16"
                elif "MT_STR" in encoding or "M_STAT" in encoding or "M_CODE" in encoding or "M_COMM" in encoding:
                    param_obj.type = "STR"
                elif "MT_DATE" in encoding or "M_DATE" in encoding:
                    param_obj.units = "ЧЧ:ММ:ГГГГ"  # Применяем формат
                    param_obj.type = "DATE"
                elif "MT_TIME" in encoding or "M_TIME" in encoding:
                    param_obj.units = "ЧЧ:ММ"  # Применяем формат
                    param_obj.type = "TIME"

                # Определяем record
                if "M_RONLY" in encoding or "M_NVM" not in encoding:
                    param_obj.record = ""
                else:
                    param_obj.record = "1"

                # Определяем coefficient
                prec_match = re.search(r'M_PREC\((\d+)\)', encoding)
                if prec_match:
                    param_obj.coefficient = str(prec_match.group(1))
                    param_obj.max_value =str(int(param_obj.max_value)/(10**int(param_obj.coefficient)))
                    param_obj.min_value =str(int(param_obj.min_value)/(10**int(param_obj.coefficient)))
                else:
                    param_obj.coefficient = ""

                # Определяем rows и description
                sadr_match = re.search(r'M_SADR\((\d+)\)', encoding)
                if sadr_match:
                    line_number = int(sadr_match.group(1))
                    strings = parse_strings(file_path, line_number)
                    param_obj.rows = "; ".join(strings)
                    param_obj.description = "; ".join(strings)

                # Определяем hidden
                if "M_HIDE" in encoding:
                    param_obj.hidden = "1"
                else:
                    param_obj.hidden = ""

                # Добавляем объект в массив
                param_objects.append(param_obj)

    return param_objects

def parse_version(file_path):
    """
    Парсит файл и извлекает значения для ключей:
    - DEVICE_NAME
    - DEVICE_GROUP
    - VERSION
    - MODULE_VERSION
    - SUBVERSION

    Args:
        file_path (str): Путь к файлу.

    Returns:
        dict: Словарь с ключами и их значениями (все значения в виде строк).
    """
    if not file_path:
        raise ValueError("file_path is null or empty")

    if not os.path.isfile(file_path):
        raise FileNotFoundError(f"File {file_path} does not exist")

    try:
        with open(file_path, 'r', encoding='Windows-1251') as file:
            content = file.read()
    except IOError as e:
        raise IOError(f"Error reading file {file_path}: {e}")

    # Словарь для хранения результатов
    result = {
        "DEVICE_NAME": "",
        "DEVICE_GROUP": "",
        "VERSION": "",
        "MODULE_VERSION": "",
        "SUBVERSION": ""
    }

    # Регулярное выражение для поиска строк вида #define KEY "VALUE" или #define KEY VALUE
    pattern = re.compile(r'#define\s+({})\s+(?:"([^"]+)"|(\S+))'.format("|".join(result.keys())))

    # Ищем все совпадения
    matches = pattern.findall(content)

    # Заполняем словарь найденными значениями
    for key, value_quoted, value_unquoted in matches:
        # Если значение в кавычках, используем его, иначе используем значение без кавычек
        value = value_quoted if value_quoted else value_unquoted
        if not value:
            raise ValueError(f"Value for key {key} is null or empty")
        result[key] = str(value)  # Преобразуем значение в строку

    return result
        
def clean_number(value):
    """
    Очищает строку от нечисловых символов (кроме минуса и точки) и преобразует в число.
    Если значение пустое или некорректное, возвращает 0.
    """
    if not value:
        return 0
    # Удаляем все символы, кроме цифр, минуса и точки
    cleaned_value = re.sub(r"[^0-9\-.]", "", value)
    try:
        return str(cleaned_value)
    except ValueError:
        return ""
    
def folder_path(value):
    """
    Создаю папку с версией Viewer для записии туда файлов 
    """
    # Создаем объект Path для родительской папки
    parent_folder = Path("Templates")

    # Указываем путь к вложенной папке
    subfolder = parent_folder / value

    if not os.path.exists(subfolder):
        os.makedirs(subfolder)  # Создает папку и все промежуточные папки

    return  subfolder

def create_param_Description(Description_file,version_info):

    with open(Description_file, 'w', encoding='Windows-1251') as file:
        file.write("[Creator]\n")
        file.write("Version=1\n")
        file.write("[General]\n")
        file.write(f"DeviceName={version_info['DEVICE_NAME']}_Tomzel\n")
        file.write(f"SoftVersion={version_info['VERSION']}.{version_info['SUBVERSION']}\n")
        file.write("Description=Блок контроля электропривода. Производство АО \"Томзэл\"\n")
        file.write("Photo=0\n")
        file.write("Manual=0\n")

def create_xml(file_path, version_info, output_folder, device_id):
    """
    Создает XML-файл на основе данных о группах и параметрах.

    Args:
        file_path (str): Путь к файлу с данными.
        version_info (dict): Словарь с информацией о версии (например, DEVICE_NAME).
        output_folder (str или Path): Путь к папке, в которую будет сохранен XML-файл.

    Returns:
        xml.etree.ElementTree.Element: Корневой элемент XML-документа.
    """
    try:
        # Парсим группы
        groups = parse_groups(file_path)
        if groups is None:
            print("Ошибка: parse_groups вернул None")
            return None

        # Создаем корневой элемент
        root = ET.Element("Table")
        root.set("DeviceId", device_id)
        root.set("DeviceName", version_info['DEVICE_NAME'])
        root.set("FirmwareVersion", version_info['VERSION'] + version_info['SUBVERSION'])

        # Парсим параметры
        parameters = parse_parameters(file_path)
        if parameters is None:
            print("Ошибка: parse_parameters вернул None")
            return None

        # Добавляем группы в XML
        for group in groups:
            group_number = group["group_index"]
            group_element = ET.SubElement(root, "Group")
            group_element.set("Name", f"ГРУППА {group['group_index']}")
            group_element.set("Type", group['group_type'])
            group_element.set("Description", group["group_description"])
            param_counter = 0  # Инициализируем счетчик

            # Добавляем параметры, если они есть для этой группы
            group_description = group["group_description"]
            if group_description in parameters:
                group_params = parameters[group_description]
                if group_params is None:
                    print(f"Ошибка: параметры для группы {group_description} отсутствуют")
                    continue

                for param in group_params:
                    # Создаем элемент Parameter
                    parameter = ET.SubElement(group_element, "Parameter")
                    parameter.set("Index", f"{group_number}{param_counter}")

                    param_counter += 1  # Увеличиваем счетчик

                    parameter.set("Name", param["param_name"])

                    # Добавляем Address
                    address = ET.SubElement(parameter, "Address")
                    address.text = str(param.get("address", "None"))  # Используем значение по умолчанию, если адрес не указан

                    # Добавляем Configuration

                    config = ET.SubElement(parameter, "Configuration")
                    

                    ET.SubElement(config, "Type").text = param.get("config_type", "None")
                    ET.SubElement(config, "Appointment").text = param.get("appointment", "Status")
                    
                    chosen = param.get("chosen")
                    if chosen != "":
                        ET.SubElement(config, "Chosen").text = param.get("chosen", "")
                    
                    # Определяем record
                    encoding = param.get("encoding", "")  # Используем .get() для безопасного доступа к ключу

                    if "M_RONLY" in encoding or "M_RUNS" in encoding:
                        # Если encoding содержит "M_RONLY" или "M_RUNS", ничего не делаем 
                        pass
                    else:
                        # Создаем элемент "CanEdit" только если encoding не содержит "M_RONLY" или "M_RUNS"
                        can_edit = param.get("canEdit", "True")  # Используем .get() для безопасного доступа к ключу
                        ET.SubElement(config, "CanEdit").text = can_edit

                    # Добавляем ValueDescription
                    value_desc = ET.SubElement(parameter, "ValueDescription")
                    ET.SubElement(value_desc, "Minimum").text = str(param.get("min_value", "None"))
                    ET.SubElement(value_desc, "Maximum").text = str(param.get("max_value", "None"))
                    ET.SubElement(value_desc, "Default").text = str(param.get("default_value", "None"))

                    encoding = param["encoding"]
                    if "MT_RUN" in encoding or "M_RUNS" in encoding:
                        ET.SubElement(value_desc, "Type").text = param.get("value_type", "Union")
                    elif "MT_DEC" in encoding or "M_RMAX" in encoding:
                        if "M_SIGN" in encoding:
                            ET.SubElement(value_desc, "Type").text = param.get("value_type", "Int")
                        else:
                            ET.SubElement(value_desc, "Type").text = param.get("value_type", "Uns")
                    elif "MT_BIN" in encoding or "M_BIN" in encoding:
                        ET.SubElement(value_desc, "Type").text = param.get("value_type", "Bin")
                    elif "MT_STR" in encoding or "M_STAT" in encoding or "M_CODE" in encoding or "M_COMM" in encoding:
                        ET.SubElement(value_desc, "Type").text = "Enum"
                    elif "MT_DATE" in encoding or "M_DATE" in encoding:
                        ET.SubElement(value_desc, "Type").text = "Date"
                    elif "MT_TIME" in encoding or "M_TIME" in encoding:
                        ET.SubElement(value_desc, "Type").text = "Time"
                    
                    unit = param["unit"]
                    if unit != "":
                        ET.SubElement(value_desc, "Unit").text = unit
                    
                    # Определяем coefficient
                    prec_match = re.search(r'M_PREC\((\d+)\)', encoding)
                    if prec_match:
                        #param.coefficient = str(param.group(1)) str(int(param_obj.max_value)/(10**int(param_obj.coefficient)))
                        ET.SubElement(value_desc, "Coefficient").text =  str(int(1)/(10**int(str(prec_match.group(1))))) 

                    # Обработка M_SADR (если требуется)
                    if "encoding" in param:
                        encoding = param["encoding"]
                        sadr_match = re.search(r'M_SADR\((\d+)\)', encoding)
                        if sadr_match:
                            line_number = int(sadr_match.group(1))
                            strings = parse_strings(file_path, line_number)
                            if strings is None:
                                print(f"Ошибка: parse_strings вернул None для строки {line_number}")
                                continue

                            # Создаем элемент <Fields>, если он еще не существует
                            if "Fields" not in value_desc:
                                fields_elem = ET.SubElement(value_desc, "Fields")
                            else:
                                fields_elem = value_desc.find("Fields")

                            # Обрабатываем каждую строку
                            for string in strings:
                                if "-" in string:
                                    bit_value, description = string.split("-", 1)
                                    field_elem = ET.SubElement(fields_elem, "Field")
                                    field_elem.set("BitValue", bit_value.strip())
                                    field_elem.set("Description", description.strip())

                    # Добавляем Info
                    info = ET.SubElement(parameter, "Info")
                    ET.SubElement(info, "Description")

        # Преобразуем ElementTree в строку
        xml_str = ET.tostring(root, encoding="utf-8")
        if xml_str is None:
            print("Ошибка: ET.tostring вернул None")
            return None

        # Используем minidom для форматирования
        parsed = minidom.parseString(xml_str)
        pretty_xml = parsed.toprettyxml(indent="\t")

        # Создаем папку, если она не существует
        output_folder = Path(output_folder)
        output_folder.mkdir(parents=True, exist_ok=True)

        # Записываем XML в файл
        xml_file_path = output_folder / f"{version_info['DEVICE_NAME']}_v{version_info['DEVICE_GROUP']}.{version_info['VERSION']}.{version_info['MODULE_VERSION']}.{version_info['SUBVERSION']}.xml"
        with open(xml_file_path, "w", encoding="utf-8") as file:
            file.write(pretty_xml)

        print(f"Файл  {xml_file_path} успешно создан.")
        return root

    except Exception as e:
        print(f"Ошибка при создании XML: {e}")
        return None

class TpeCryptor:
    def __init__(self, key, iv):
        self.key = key
        self.iv = iv


    def decrypt_tpe_from_tpe_file(self, file_path):
        try:
            with open(file_path, 'rb') as file:
                encrypted_data = file.read()

            cipher = DES3.new(self.key, DES3.MODE_CBC, self.iv)
            decrypted_data = unpad(cipher.decrypt(encrypted_data), DES3.block_size)

            xml_doc = ET.fromstring(decrypted_data.decode('utf-8'))
            return xml_doc
        except Exception as ex:
            print(f"Ошибка при дешифровании: {ex}")
            return None

    def encrypt_xml_document_to_stream(self, xml_doc, output_path):
        try:
            xml_str = ET.tostring(xml_doc, encoding='utf-8')
            cipher = DES3.new(self.key, DES3.MODE_CBC, self.iv)
            encrypted_data = cipher.encrypt(pad(xml_str, DES3.block_size))

            with open(output_path, 'wb') as file:
                file.write(encrypted_data)
        except Exception as ex:
            print(f"Ошибка при шифровании: {ex}")


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

    # Пример использования
    file_modefication_path = find_modefication_file()  # Укажите путь к вашему файлу
    device_id = find_device_id(file_modefication_path)
    if device_id is not None:
        print(f"Значение DEVICE_ID: {device_id}")

    # Поиск файла с информацией о версии
    file_param_path = find_version_file()
    
    # Парсинг информации о версии
    version_info = parse_version(file_param_path)

    print(version_info)
    
    # Поиск файла с параметрами
    file_param_path = find_param_file()

    # Получаем данные
    groups = parse_groups(file_param_path)
    param_objects = create_param_objects(file_param_path)
    name_file = f"{version_info['DEVICE_NAME']}_v{version_info['DEVICE_GROUP']}.{version_info['VERSION']}.{version_info['MODULE_VERSION']}.{version_info['SUBVERSION']}"

    # Создаем файлов
    excel_file = folder_path(name_file) / f"Viewer_{name_file}.xls"
    Description_file = folder_path(name_file) / f"Viewer_{name_file}.dfi"
    xml_file = folder_path(name_file)
    tpe_file = folder_path(name_file) / f"{name_file}.tpe"

    create_param_Description(Description_file, version_info)

    # Ключ и вектор инициализации для шифрования для создания TPE
    key = bytes([0x54, 0x1F, 0x10, 0x65, 0x20, 0x6B, 0x65, 0x79, 0x78, 0x01, 0x6C, 0x54, 0x75, 0x2A, 0x69, 0x64])  # 16 байт
    iv = bytes([0x20, 0x6B, 0x15, 0x79, 0x7C, 0x61, 0x5C, 0x45])  # 8 байт

    # Создаем экземпляр криптора
    cryptor = TpeCryptor(key, iv)

    # Шифруем XML-документ и сохраняем в файл
    try:
       xml_doc = create_xml(file_param_path, version_info, xml_file, device_id)
    except Exception as e:
        print(f"Ошибка при шифровании XML: {e}")

    # Шифруем TPE-документ и сохраняем в файл
    try:
        cryptor.encrypt_xml_document_to_stream(xml_doc, tpe_file)
    except Exception as e:
        print(f"Ошибка при шифровании XML: {e}")

    # Создаем Excel-файл
    try:
        create_excel_file(excel_file, param_objects, groups)
    except Exception as e:
        print(f"Ошибка при создании Excel-файла: {e}")

    # Получаем текущую версию приложения
    version = check_app_version()
    print(f"Текущая версия приложения: {version}")
    
if __name__ == "__main__":
    main()
