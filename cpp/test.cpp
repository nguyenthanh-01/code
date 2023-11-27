#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[101][101];
bool visit[101][101];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void dfs(int i, int j) {
    cout << i << " " << j << endl;
    visit[i][j] = true;
    for (int k = 0; k < 4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'x' && visit[i1][j1] == 0) {
            dfs(i1, j1);
        }
    }
}

void inp() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    memset(visit, false, sizeof(visit));
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 'x' && visit[i][j] == 0) {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}

int main() {
    inp();
    return 0;
}
