# duyệt từng phần tử trong str
text = "Hello World"
shift = 3
alphabet = "abcdefghijklmnopqrstuvwxyz"
encrypted_text = ""
for char in text:
    index = alphabet.find(char.lower())
    new_index = index + shift
    encrypted_text += alphabet[new_index]
    print(f"char: {char} encrypted text: {encrypted_text}")
