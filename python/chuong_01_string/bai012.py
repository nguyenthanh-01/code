# duyệt + chuyển đổi từng phần tử trong str
text = "Hello World"
shift = 3
alphabet = "abcdefghijklmnopqrstuvwxyz"
for char in text.lower():
    index = alphabet.find(char)
    new_index = (index + shift) % len(alphabet)
    new_char = alphabet[new_index]
    print(f"char: {char} new char: {new_char}")
