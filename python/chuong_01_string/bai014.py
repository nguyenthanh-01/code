# hàm
def main():
    text = "Hello World"
    key = 3
    vigenere(text, custom_key)

def vigenere(message, key):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_text = ""
    key_index = 0
    for char in message.lower():
        index = alphabet.find(char)
        new_index = (index + key) % len(alphabet)
        encrypted_text += alphabet[new_index]
    print('plain text:', message)
    print(f"encrypted text: {encrypted_text}")

main()
