#include <bits/stdc++.h>
using namespace std;

int n, m;

// bản đồ
char a[101][101];

// đánh dấu
bool visit[101][101];

// di chuyển
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void dfs(int i, int j) {
    cout << i << " " << j << endl;
    
    // đánh dấu == 1
    visit[i][j] = true;
    
    // duyệt 4
    for (int k = 0; k < 4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        
        // kiểm tra 
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 'x' && visit[i1][j1] == 0) {
            
            // đệ quy
            dfs(i1, j1);
        }
    }
}

void inp() {
    cin >> n >> m;
    // vẽ bản đồ
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    
    // đánh dấu false
    memset(visit, false, sizeof(visit));
    int cnt = 0;
    
    // duyệt bản đồ
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
          
            // nếu vị trí == 1 và đánh dấu == 0
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
