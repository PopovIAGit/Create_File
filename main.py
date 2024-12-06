import os
import openpyxl

from domain import check_app_version
from enum import Enum

#todo создание промежуточных строк вынести в функцию и вызывать при парсинге файла

class ParamType(Enum):
    UNION = "UNION"
    UINT16 = "UINT16"
    INT16 = "INT16"
    STR = "STR"

class ParamView(Enum):
    DEC = "DEC"
    HEX = "HEX"
    BIN = "BIN"

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

def find_strings(file_path, number):
    with open(file_path, 'r') as file:
        lines = file.readlines()
        params_start = None
        params_end = None
        for i, line in enumerate(lines):
            if line.strip() == "//! Строки":
                params_start = i
            elif line.strip() == "//! Строки конец":
                params_end = i
                break
        if params_start is not None and params_end is not None:
            lines = lines[params_start+1:params_end]
            result = []
            found = False
            for line in lines:
                if found:
                    if line.strip() == "//!----------------":
                        break
                    parts = line.split('"')
                    if len(parts) >= 3:
                        result.append(parts[1].strip())
                elif "//" in line and line.split("//")[1].strip() == str(number):
                    found = True
                    parts = line.split('"')
                    if len(parts) >= 3:
                        result.append(parts[1].strip())
            return result


def parse_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()
        params_start = None
        params_end = None
        for i, line in enumerate(lines):
            if line.strip() == "//! Параметры":
                params_start = i
            elif line.strip() == "//! Параметры конец":
                params_end = i
                break
        if params_start is not None and params_end is not None:
            params_lines = lines[params_start+1:params_end]
            # Create a dictionary to map indices to lines
            index_lines = {}
            for line in params_lines:
                index = line.split('.')[0]
                if index in index_lines:
                    index_lines[index].append(line)
                else:
                    index_lines[index] = [line]
            
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
    
    strings = find_strings(file_path, 260)
    
    print(strings)
    
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

