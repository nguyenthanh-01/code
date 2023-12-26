# duyệt từng phần tử trong str
text = "Hello World"
shift = 3
alphabet = "abcdefghijklmnopqrstuvwxyz"
for char in text:
    index = alphabet.find(char.lower())
    shifted = alphabet[index + shift]
    print(shifted)
