#include <regx52.h>
#include <stdbool.h>

void Delay_ms(int);

void main() {
    P0 = 0;
    P0 |= (1 << 2);
}

void Delay_ms(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 123; j++);
    }
}
