# isupper() kiểm tra chữ hoa
# lower() chuyển đổi chữ thường
def main():
    pass

def convert_to_snake_case(pascal_or_camel_cased_string):
    snake_cased_char_list = []
    for char in pascal_or_camel_cased_string:
        if char.isupper():
            converted_character = '_' + char.lower()

if __name__ == '__main__':
    main()
