#include "../lib/at89c52.h"

void main() {
    Led = 0;

    while(1) {
        if(On_Off == 0) {
            Led = !Led;
        }
    }
}
