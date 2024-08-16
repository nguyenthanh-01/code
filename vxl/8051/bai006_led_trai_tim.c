#include "../lib/at89c52.h"

void Nhat();
void Nhi();
void Tu();
void Bat();

void main() {
    while(1) {
        P0 = P1 = P2 = P3 = 0;
        
        Nhat();
        Nhi();
        Tu();
        Bat();
    }
}

void Nhat() {
    int i, n;
    
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

void Nhi() {
    int i, n;
    
    for(i = 0; i < 4; i++) {
        P0 |= (1 << i);
        P2 |= (1 << i);
        Delay_ms(100);
    }
        
    n = 2;

    while(n--) {
        for(i = 0; i < 4; i++) {
            P0 <<= 1;
            P2 <<= 1;
            Delay_ms(100);
        }

        for(i = 0; i < 4; i++) {
            P0 <<= 1;
            P1 |= (1 << i);
            
            P2 <<= 1;
            P3 |= (1 << i);
            
            Delay_ms(100);
        }
        
        for(i = 0; i < 4; i++) {
            P1 <<= 1;
            P3 <<= 1;
            Delay_ms(100);
        }

        for(i = 0; i < 4; i++) {
            P1 <<= 1;
            P2 |= (1 << i);
            
            P3 <<= 1;
            P0 |= (1 << i);
            
            Delay_ms(100);
        }
        
        for(i = 0; i < 4; i++) {
            P2 <<= 1;
            P0 <<= 1;
            Delay_ms(100);
        }

        for(i = 0; i < 4; i++) {
            P2 <<= 1;
            P3 |= (1 << i);
            
            P0 <<= 1;
            P1 |= (1 << i);
            
            Delay_ms(100);
        }
        
        for(i = 0; i < 4; i++) {
            P3 <<= 1;
            P1 <<= 1;
            Delay_ms(100);
        }

        if(n != 0) {
            for(i = 0; i < 4; i++) {
                P3 <<= 1;
                P0 |= (1 << i);
                
                P1 <<= 1;
                P2 |= (1 << i);
                
                Delay_ms(100);
            }
        }
        else {
            for(i = 0; i < 4; i++) {
                P3 <<= 1;
                P1 <<= 1;
                Delay_ms(100);
            }
        }
    }
}

void Tu() {
    int i, n;
    
    int arr[] = {0xE1, 0xC3, 0x87, 0x0F};
    
    for(i = 0; i < 4; i++) {
        P0 |= (1 << i);
        P1 |= (1 << i);
        P2 |= (1 << i);
        P3 |= (1 << i);
        Delay_ms(100);
    }
        
    n = 2;

    while(n--) {
        for(i = 0; i < 4; i++) {
            P0 <<= 1;
            P1 <<= 1;
            P2 <<= 1;
            P3 <<= 1;
            Delay_ms(100);
        }

        for(i = 0; i < 4; i++) {
            P0 = arr[i];
            P1 = arr[i];
            P2 = arr[i];
            P3 = arr[i];
            Delay_ms(100);
        }
        
        for(i = 0; i < 4; i++) {
            P1 <<= 1;
            P2 <<= 1;
            P3 <<= 1;
            P0 <<= 1;
            Delay_ms(100);
        }

        for(i = 0; i < 4; i++) {
            P1 = arr[i];
            P2 = arr[i];
            P3 = arr[i];
            P0 = arr[i];
            Delay_ms(100);
        }
        
        for(i = 0; i < 4; i++) {
            P2 <<= 1;
            P3 <<= 1;
            P0 <<= 1;
            P1 <<= 1;
            Delay_ms(100);
        }

        for(i = 0; i < 4; i++) {
            P2 = arr[i];
            P3 = arr[i];
            P0 = arr[i];
            P1 = arr[i];
            Delay_ms(100);
        }
        
        for(i = 0; i < 4; i++) {
            P3 <<= 1;
            P0 <<= 1;
            P1 <<= 1;
            P2 <<= 1;
            Delay_ms(100);
        }

        if(n != 0) {
            for(i = 0; i < 4; i++) {
                P3 = arr[i];
                P0 = arr[i];
                P1 = arr[i];
                P2 = arr[i];
                Delay_ms(100);
            }
        }
        else {
            for(i = 0; i < 4; i++) {
                P3 <<= 1;
                P0 <<= 1;
                P1 <<= 1;
                P2 <<= 1;
                Delay_ms(100);
            }
        }
    }
}

void Bat() {
    int i, n, pos_0, pos_1, pos_2, pos_3;
    
    pos_0 = pos_1 = 7;
    pos_2 = pos_3 = 0;
    
    n = 8;
    
    while(n--) {
        P3 |= (1 << 7);
        Delay_ms(100);
        
        for(i = 7; i > pos_3; i--) {
            P3 >>= 1;
            Delay_ms(100);
        }
        
        P3 >>= 1;
        P2 |= (1 << 7);
        Delay_ms(100);
        
        for(i = 7; i > pos_2; i--) {
            P2 ^= (1 << i);
            P2 |= (1 << i - 1);
            Delay_ms(100);
        }
        
        pos_2++;
        
        P0 |= 1;
        Delay_ms(100);
        
        for(i = 0; i < pos_0; i++) {
            P0 <<= 1;
            Delay_ms(100);
        }
        
        P0 <<= 1;
        P1 |= 1;
        Delay_ms(100);
        
        for(i = 0; i < pos_1; i++) {
            P1 ^= (1 << i);
            P1 |= (1 << i + 1);
            Delay_ms(100);
        }
        
        pos_1--;
    }
    
    n = 8;
    
    while(n--) {
        P3 |= (1 << 7);
        Delay_ms(100);
        
        for(i = 7; i > pos_3; i--) {
            P3 ^= (1 << i);
            P3 |= (1 << i - 1);
            Delay_ms(100);
        }
        
        pos_3++;
        
        P0 |= 1;
        Delay_ms(100);
        
        for(i = 0; i < pos_0; i++) {
            P0 ^= (1 << i);
            P0 |= (1 << i + 1);
            Delay_ms(100);
        }
        
        pos_0--;
    }
}
