# duyệt từng phần tử trong str
text = "Hello World"
shift = 3
alphabet = "abcdefghijklmnopqrstuvwxyz"
for char in text:
    index = alphabet.find(char.lower())
    new_index = index + shift
    new_char = alphabet[new_index]
    print(f"char: {char} new char: {new_char}")
