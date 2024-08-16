#include "../lib/at89c52.h"

void main() {
    while(1) {
        int i;

        P0 = P1 = P2 = P3 = 0;

        for(i = 0; i < 4; i++) {
            P0 |= (1 << i);
        }

        for(i = 0; i < 4; i++) {
            P0 <<= 1;
        }

        for(i = 0; i < 4; i++) {
            P0 <<= 1;
            P1 |= (1 << i)
        }
    }
}
