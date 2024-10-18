#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define ll long long
#define n (int) 1e7

bool arr[n];

void sang_nt();

int main() {
    sang_nt();

    int x;

    while(scanf("%d", &x) == 1) {
        if(arr[x] == true) {
            printf("yes ");
        }
        else {
            printf("no ");
        }
    }

    return 0;
}

void sang_nt() {
    arr[2] = true;

    for(int i = 3; i < n; i += 2) {
        arr[i] = true;
    }

    int _n = sqrt(n) + 1;

    for(int i = 3; i < _n; i += 2) {
        if(arr[i] == true) {
            for(int j = i * i; j < n; j += i) {
                arr[j] = false;
            }
        }
    }
}
