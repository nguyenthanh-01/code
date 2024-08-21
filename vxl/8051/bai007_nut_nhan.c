#include "../lib/at89c52.h"

void main() {
    P2_0 = 0;

    while(1) {
        if(P1_0 == 0) {
            P2_0 = 1;
        }
        esle {
            P2_0 = 0;
        }
    }
}
