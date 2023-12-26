# duyệt + chuyển đổi từng phần tử trong str
text = "Hello World"
shift = 3
alphabet = "abcdefghijklmnopqrstuvwxyz"
for char in text.lower():
    index = alphabet.find(char)
    shifted = alphabet[index + shift]
    print(shifted)
