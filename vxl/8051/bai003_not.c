#include <regx52.h>
#include <stdbool.h>

void Delay_ms(int);

void main() {
    while(true) {
        P0 = ~P0;
        Delay_ms(500);
    }
}

void Delay_ms(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 123; j++);
    }
}
