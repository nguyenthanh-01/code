#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define n (int) 1e7

void sang_ngto(bool []);

int main() {
    bool *arr = (bool*) malloc(n * sizeof(bool));

    for(int i = 0; i < n; i++) {
        arr[i] = true;
    }

    sang_ngto(arr);

    free(arr);
    
    return 0;
}

void sang_ngto(bool arr[]) {
    arr[0] = arr[1] = false;

    int m = sqrt(n);

    for(int i = 2; i <= m; i++) {
        if(arr[i]) {
            for(int j = i * i; j < n; j += i) {
                arr[j] = false;
            }
        }
    }
}
