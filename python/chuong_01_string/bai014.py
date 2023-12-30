# hàm
def main():
    text = "Hello World"
    shift = 3
    vigenere(text, shift)

def vigenere(message, key):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_text = ""
    for char in message.lower():
        index = alphabet.find(char)
        new_index = (index + key) % len(alphabet)
        encrypted_text += alphabet[new_index]
    print('plain text: ' + message)
    print(f"encrypted text: {encrypted_text}")

main()
