#include "../lib/at89c52.h"

void main() {
    Led = 0;

    while(1) {
        if(On == 0) {
            Led = 1;
        }
        
        if(Off == 0) {
            Led = 0;
        }
    }
}
