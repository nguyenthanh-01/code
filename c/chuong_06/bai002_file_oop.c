#include <stdio.h>
#include <stdlib.h>

#define n (int) 1e5
#define all(a, i) a[i].ten, a[i].lop, &a[i].diem

typedef struct {char ten[100]; char lop[50]; float diem;} sv;

void input(sv [], int []);

int main() {
    sv *arr = (sv*) malloc(n * sizeof(sv));

    int cnt[] = {0};

    input(arr, cnt);

    for(int i = 0; i < cnt[0]; i++) {
        printf("Ten: %s \n", arr[i].ten);
        printf("Lop: %s \n", arr[i].lop);
        printf("Diem: %.1f \n", arr[i].diem);
    }

    free(arr);
    return 0;
}

void input(sv arr[], int cnt[]) {
    FILE *f = fopen("input.txt", "r");

    if(f == NULL) {
        return;
    }

    while(fscanf(f, " %[^\n] %s %f", all(arr, cnt[0])) != EOF) {
        cnt[0]++;
    }

    fclose(f);
}
