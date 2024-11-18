import os
import openpyxl

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

def create_exel_file(fiename):
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
        sheet.cell(row=1, column=i+1).value = header

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