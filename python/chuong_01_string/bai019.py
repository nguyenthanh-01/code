# clean code
def main():
    text = "Hello World!"
    custom_key = "python"
    encryption = encrypt(text, custom_key)
    print(encryption)
    decryption = decrypt(encryption, custom_key)
    print(decryption)

def vigenere(message, key, direction = 1):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    final_message = ""
    key_index = 0
    for char in message.lower():
        # thêm ký tự đặc biệt vào tin nhắn
        if not char.isalpha():
            final_message += char
            continue
        # tìm ký tự key để mã hóa
        else:
            key_char = key[key_index % len(key)]
            key_index += 1
        # mã hóa
        offset = alphabet.index(key_char)
        index = alphabet.find(char)
        # deque
        new_index = (index + offset * direction) % len(alphabet)
        final_message += alphabet[new_index]
    return final_message

def encrypt(message, key):
    return vigenere(message, key)
    
def decrypt(message, key):
    return vigenere(message, key, -1)

main()
