# comment
def main():
    text = "Hello World"
    custom_key = "python"
    vigenere(text, custom_key)

def vigenere(message, key):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_text = ""
    key_index = 0
    for char in message.lower():
        # thêm ký tự space vào tin nhắn
        if(char == " "):
            encrypted_text += char
            continue
        # tìm ký tự key để mã hóa
        else:
            key_char = key[key_index % len(key)]
            key_index += 1
        # mã hóa
        offset = alphabet.index(key_char)
        index = alphabet.find(char)
        new_index = (index + offset) % len(alphabet)
        encrypted_text += alphabet[new_index]
    print('plain text: ' + message)
    print(f"encrypted text: {encrypted_text}")

main()
