#include "../lib/at89c52.h"

void Nhat();

void main() {
    P0 = P1 = P2 = P3 = 0;

    while(1) {
        Nhat();
    }
}

void Nhat() {
    int i;
    int n;
    
    for(i = 0; i < 4; i++) {
        P0 |= (1 << i);
        Delay_ms(100);
    }
        
    n = 2;

    while(n--) {
        for(i = 0; i < 4; i++) {
            P0 <<= 1;
            Delay_ms(100);
        }

        for(i = 0; i < 4; i++) {
            P0 <<= 1;
            P1 |= (1 << i);
            Delay_ms(100);
        }
        
        for(i = 0; i < 4; i++) {
            P1 <<= 1;
            Delay_ms(100);
        }

        for(i = 0; i < 4; i++) {
            P1 <<= 1;
            P2 |= (1 << i);
            Delay_ms(100);
        }
        
        for(i = 0; i < 4; i++) {
            P2 <<= 1;
            Delay_ms(100);
        }

        for(i = 0; i < 4; i++) {
            P2 <<= 1;
            P3 |= (1 << i);
            Delay_ms(100);
        }
        
        for(i = 0; i < 4; i++) {
            P3 <<= 1;
            Delay_ms(100);
        }

        if(n != 0) {
            for(i = 0; i < 4; i++) {
                P3 <<= 1;
                P0 |= (1 << i);
                Delay_ms(100);
            }
        }
        else {
            for(i = 0; i < 4; i++) {
                P3 <<= 1;
                Delay_ms(100);
            }
        }
    }
}
