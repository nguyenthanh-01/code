#include <stdio.h>

#define toa_do 8
#define n 3
#define m 3

int main() {
    int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[] = {0, -1, -1, -1, 0, 1, 1, 1};

    int ban_do[n][m] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i = 1;
    int j = 1;

    for(int k = 0; k < toa_do; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];

        printf("%d ", ban_do[i1][j1]);
    }
    return 0;
}
