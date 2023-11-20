#include <stdio.h>

#define sl (int) 1e7
int tk_np[sl];

typedef long long ll;

int tim_kiem_nhi_phan(int, int, int);

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tk_np[i]);
    }
    int tmp = tim_kiem_nhi_phan(0, n - 1, 5);
    if (tmp == -1) {
        printf("khong tim thay \n");
    } else printf("vi tri: %d \n", tmp);
    return 0;
}

int tim_kiem_nhi_phan(int l, int r, int x) {
    while (l <= r) {
        int m = (r - l) / 2 + l;
        if (x == tk_np[m]) {
            return m;
        } else if (x < tk_np[m]) {
            r = m - 1;
        } else l = m + 1;
    }
    return -1;
}
