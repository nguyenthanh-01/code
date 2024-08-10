#include <regx52.h>
#include <stdbool.h>

void Delay_ms(int);

void main() {
    while(true) {
        P0 = 0x01;

        for(int i = 0; i < 8; i++) {
            Delay_ms(500);
            P0 <<= 1;
        }

        P0 = 0x80;

        for(int i = 0; i < 8; i++) {
            Delay_ms(500);
            P0 >>= 1;
        }

        char pos = 0x80;
        P0 = pos;

        for(int i = 0; i < 8; i++) {
            Delay_ms(500);
            pos >>= 1;
            P0 = pos;
        }
    }
}

void Delay_ms(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 123; j++);
    }
}
