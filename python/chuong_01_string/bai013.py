# nối chuỗi
text = "Hello World"
shift = 3
alphabet = "abcdefghijklmnopqrstuvwxyz"
encrypted_text = ""
for char in text.lower():
    index = alphabet.find(char)
    new_index = (index + shift) % len(alphabet)
    encrypted_text += alphabet[new_index]
print(f"encrypted text: {encrypted_text}")
