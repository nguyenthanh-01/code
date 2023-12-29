# hàm
def main():
    text = "Hello World"
    shift = 3
    caesar(text, shift)

def caesar(message, offset):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_text = ""
    for char in message.lower():
        index = alphabet.find(char)
        new_index = (index + offset) % len(alphabet)
        encrypted_text += alphabet[new_index]
    print('plain text:', message)
    print(f"encrypted text: {encrypted_text}")

main()
