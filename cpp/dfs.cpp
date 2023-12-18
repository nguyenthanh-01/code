#include <iostream>
#include <cstring>
using namespace std;

#define hang 5
#define cot 7
#define toa_do_di_chuyen 4
#define ms(a, n) memset(a, n, sizeof(a))

// ban do
char ban_do[hang][cot];

// danh dau
bool flag[hang][cot];

// toa do di chuyen x
int dx[toa_do_di_chuyen] = {-1, 1, 0, 0};

// toa do di chuyen y
int dy[toa_do_di_chuyen] = {0, 0, -1, 1};

void nhap();
void danh_dau();
void dfs_stat(int, int);
bool dfs(int, int);
bool out_ban_do(int, int);
bool buc_tuong(int, int);
bool flag_true(int, int);

int main() {
    nhap();
    danh_dau();
    dfs_stat(1, 0);
    return 0;
}

void nhap() {
    // nhap ban do
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cin >> ban_do[i][j];
        }
    }
}

void danh_dau() {
    // danh dau false
    memset(flag, false, sizeof(flag));
}

void dfs_stat(int x, int y) {
    // dfs
    if (dfs(x, y)) {
        cout << "[" << x << ", " << y << "] \n";
    }
    else cout << "khong tim thay duong di den dich \n";
}

bool dfs(int x_old, int y_old) {
    // kiem tra toa do b
    if (ban_do[x_old][y_old] == 'b') {
        return true;
    }

    // cam co
    flag[x_old][y_old] = true;

    // di chuyen
    for (int i = 0; i < toa_do_di_chuyen; i++) {
        int x = x_old + dx[i];
        int y = y_old + dy[i];
        
        // kiem tra toa do (x, y)
        if (out_ban_do(x, y) || buc_tuong(x, y) || flag_true(x, y)) {
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

bool out_ban_do(int x, int y) {
    if (x < 0 || x >= hang || y < 0 || y >= cot) {
        return true;
    }
    return false;
}

bool buc_tuong(int x, int y) {
    return (ban_do[x][y] == '0') ? true : false;
}

bool flag_true(int x, int y) {
    return (flag[x][y] == true) ? true : false;
}

/*
0 0 0 0 0 b 0
a 1 1 1 0 1 0
0 1 0 1 1 1 0
0 1 1 1 0 0 0
0 0 0 0 0 0 0
*/

/*
[0, 5] [1, 5] [2, 5] [2, 4] [2, 3] [3, 3] [3, 2] [3, 1] [2, 1] [1, 1] [1, 0]
*/
