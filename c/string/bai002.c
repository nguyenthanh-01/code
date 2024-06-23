#include <stdio.h>

int ord(char);
char chr(int);
void test_1(int);

int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    test_1(ord(a) + ord(b));
    return 0;
}

int ord(char c) {
    return (int) (c - '0');
}

char chr(int a) {
    return (char) (a + 48);
}

void test_1(int a) {
    if(a == 0) {
        return;
    }
    test_1(a / 10);
    int tmp = a % 10;
    printf("%c", chr(tmp));
}
