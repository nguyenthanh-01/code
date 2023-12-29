# hàm
text = "Hello World"
shift = 3

def caesar():
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_text = ""
    for char in text.lower():
        index = alphabet.find(char)
        new_index = (index + shift) % len(alphabet)
        encrypted_text += alphabet[new_index]
    print('plain text:', text)
    print(f"encrypted text: {encrypted_text}")

caesar()
