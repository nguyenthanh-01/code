def main():
    text = 'mrttaqrhknsw ih puggrur'
    # văn bản
    custom_key = 'happycoding'
    # chuỗi key
    print(f'\nEncrypted text: {text}')
    print(f'Key: {custom_key}')
    decryption = decrypt(text, custom_key)
    # văn bản đã mã hóa / giải mã
    print(f'\nDecrypted text: {decryption}\n')


def vigenere(message, key, direction=1):
    # direction: rẽ nhánh
    key_index = 0
    # vị trí key trong chuỗi
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    # bảng mã
    final_message = ''
    # văn bản đã mã hóa / giải mã

    for char in message.lower():
    # message.lower(): chuỗi thấp

        if not char.isalpha():
        # char.isalpha(): ký tự thường
            final_message += char
        else:
            key_char = key[key_index % len(key)]
            # từ vị trí tách key ra khỏi chuỗi
            key_index += 1

            offset = alphabet.index(key_char)
            # alphabet.index(): tìm kiếm và trả về error
            index = alphabet.find(char)
            # alphabet.find(): tìm kiếm và trả về -1
            new_index = (index + offset*direction) % len(alphabet)
            # direction = 1 => mã hóa
            # direction = -1 => giải mã
            final_message += alphabet[new_index]

    return final_message

def encrypt(message, key):
    # encrypt: nhánh mã hóa
    return vigenere(message, key)

def decrypt(message, key):
    # decrypt: nhánh giải mã
    return vigenere(message, key, -1)

if __name__ == "__main__":
    main()
