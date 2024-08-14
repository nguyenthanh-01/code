#include <regx52.h>

void Delay_ms(int);

void main() {
    while(1) {
        int i;
        char pos;
        
        P0 = 0x01;

        for(i = 0; i < 8; i++) {
            Delay_ms(500);
            P0 <<= 1;
        }

        P0 = 0x80;

        for(i = 0; i < 8; i++) {
            Delay_ms(500);
            P0 >>= 1;
        }

        pos = 0x80;
        P0 = pos;

        for(i = 0; i < 8; i++) {
            Delay_ms(500);
            pos >>= 1;
            P0 = pos;
        }

        P0 = 0x01;

        for(i = 0; i < 8; i++) {
            Delay_ms(500);
            P0 <<= 1;
            P0 |= 1;
        }
    }
}

void Delay_ms(int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < 123; j++);
    }
}
