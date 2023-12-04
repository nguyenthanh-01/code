#include <bits/stdc++.h>
using namespace std;

#define ms(a, b) memset(a, b, sizeof(a))
#define n 5
#define m 5

// ban do
char ban_do[n][m];

// danh dau
bool flag[n][m];

// huong di chuyen
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void nhap();
bool dfs(int, int);

int main() {
    nhap();
    return 0;
}

void nhap() {
    // ve ban do
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ban_do[i][j];
        }
    }

    // danh dau false
    ms(flag, false);

    // diem a
    int x1, y1;
    cin >> x1 >> y1;
    ban_do[x1][y1] = 'a';

    // diem b
    int x2, y2;
    cin >> x2 >> y2;
    ban_do[x2][y2] = 'b';

    // dfs
    if (dfs(x1, y1)) {
        cout << "[" << x1 << ", " << y1 << "] \n";
    } else cout << "khong tim thay \n";
}

bool dfs(int i, int j) {
    // kiem tra toa do b
    if (ban_do[i][j] == 'b') {
        return true;
    }

    // cam co
    flag[i][j] = true;

    // di chuyen
    for (int k = 0; k < 4; k++) {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x < 0 || x >= n || y < 0 || y >= m || ban_do[x][y] == '0' || flag[x][y]) {
            continue;
        }

        // de quy
        if (dfs(x, y)) {
            cout << "[" << x << ", " << y << "] ";
            return true;
        }
    }
    return false;
}
