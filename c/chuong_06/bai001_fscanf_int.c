#include <stdio.h>
#include <stdlib.h>

#define n (int) 1e5

void input(int [], int []);

int main() {
    int *arr = (int*) malloc(n * sizeof(int));

    int cnt[] = {0};

    input(arr, cnt);

    for(int i = 0; i < cnt[0]; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}

void input(int arr[], int cnt[]) {
    FILE *f = fopen("input.txt", "r");

    while(fscanf(f, "%d ", &arr[cnt[0]]) != EOF) {
        cnt[0]++;
    }

    fclose(f);
}
