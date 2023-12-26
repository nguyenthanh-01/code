# duyệt từng phần tử trong str
text = "Hello World"
shift = 3
alphabet = "abcdefghijklmnopqrstuvwxyz"
for i in text:
    index = alphabet.find(i.lower())
    shifted = alphabet[index + shift]
    print(shifted)
