#include "../lib/at89c52.h"

void Nhat();
void Nhi();
void Tu();

void main() {
    P0 = P1 = P2 = P3 = 0;

    while(1) {
        Nhat();
        Nhi();
        Tu();
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

void Nhi() {
    int i;
    int n;
    
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
    int i;
    int n;
    
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
