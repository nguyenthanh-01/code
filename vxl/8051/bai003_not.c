#include <regx52.h>

void Delay_ms(int);

void main() {
    P0 = 0;
    
    while(1) {
        P0 = ~P0;
        Delay_ms(500);
    }
}

void Delay_ms(int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < 123; j++);
    }
}
