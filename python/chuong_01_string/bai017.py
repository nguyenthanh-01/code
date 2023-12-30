# điều hướng
def main():
    text = "Hello World"
    custom_key = "python"
    encryption = vigenere(text, custom_key)
    print(encryption)
    decryption = vigenere(encryption, custom_key, -1)
    print(decryption)

def vigenere(message, key, direction = 1):
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
        new_index = (index + offset * direction) % len(alphabet)
        encrypted_text += alphabet[new_index]
    return encrypted_text

main()
