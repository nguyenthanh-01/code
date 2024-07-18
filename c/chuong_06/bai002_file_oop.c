#include <stdio.h>
#include <stdlib.h>

#define n (int) 1e5
#define all(a, i) a[i].ten, a[i].lop, &a[i].gpa

typedef struct {char ten[100]; char lop[50]; float gpa;} sv;

void input(sv [], int []);

int main() {
    sv *arr = (sv*) malloc(n * sizeof(sv));

    int cnt[] = {0};

    input(arr, cnt);

    for(int i = 0; i < cnt[0]; i++) {
        printf("Sinh vien thu %d \n", i + 1);
        printf("Ten: %s \n", arr[i].ten);
        printf("Lop: %s \n", arr[i].lop);
        printf("GPA: %.1f \n", arr[i].gpa);
        printf("\n");
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
