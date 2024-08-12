#include "lib/at89c52.h"

void main() {
    while(true) {
        P0_0 = !P0_0;
        Delay_ms(500);
    }
}
