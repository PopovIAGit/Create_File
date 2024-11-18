import os


def create_file(filename, text):
    with open(filename, "w", encoding="utf-8") as f:
        f.write(text)

def main():
    print("Hello World")
    create_file("test.txt", "привет мир")
    
if __name__ == "__main__":
    main()