# ''.join(snake_cased_char_list)
# input: snake_cased_char_list
# output: str

def main():
    pass

def convert_to_snake_case(pascal_or_camel_cased_string):
    snake_cased_char_list = []
    for char in pascal_or_camel_cased_string:
        if char.isupper():
            converted_character = '_' + char.lower()
        else:
            snake_cased_char_list.append(char)
    snake_cased_string = ''.join(snake_cased_char_list)

if __name__ == '__main__':
    main()
