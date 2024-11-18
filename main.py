import os
import openpyxl

#todo создание промежуточных строк вынести в функцию и вызывать при парсинге файла

class Param:
    def __init__(self):
        self.class_num = 0  # Класс числовой
        self.name = ""  # название текстовое
        self.value = None  # значение пустое
        self.units = ""  # Единицы измерения текстовое
        self.type = ""  # тип строковый
        self.view = ""  # Вид строковый
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

def create_exel_file():
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
        ["6", "R. Технологический регистр"],
        ["7", "E Журнал событий"]
    ]
    
    for i, row in enumerate(data):
        for j, value in enumerate(row):
            cell = sheet.cell(row=i+2, column=j+1)
            cell.value = value
    
    # Set the width of each column to the width of the text
    for i, header in enumerate(headers):
        sheet.column_dimensions[openpyxl.utils.get_column_letter(i+1)].width = len(header) * 1.2
    

    wb.save("example.xlsx")


def create_file(filename, text):
    with open(filename, "w", encoding="utf-8") as f:
        f.write(text)

def find_files():
    filenames = ["params.h", "menu_params.h"]
    for filename in filenames:
        for root, dirs, files in os.walk("."):
            if filename in files:
                print(f"Found {filename} at {os.path.join(root, filename)}")
                break
        else:
            print(f"Error: {filename} not found")

def main():
    #create_file("test.txt", "привет мир")
    find_files()
    create_exel_file()
    
    
if __name__ == "__main__":
    main()