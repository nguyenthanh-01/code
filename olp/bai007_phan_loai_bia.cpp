#include <bits/stdc++.h>
using namespace std;

typedef struct {float a; float b;} ff;
typedef vector<ff> vff;
typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    while(n--) {
        int m; cin >> m;
        int val = 0;

        vff arr(m);
        vi lis(m);

        for(ff &i : arr) {
            cin >> i.a >> i.b;
        }

        for(int i = 1; i < m; i++) {
            for(int j = 0; j < i; j++) {
                if(arr[j].a < arr[i].a) {
                    if(arr[j].b > arr[i].b) {
                        lis[i] = max(lis[i], lis[j] + 1);
                    }
                }
            }

            val = max(val, lis[i]);
        }

        cout << val + 1 << "\n";
    }

    return 0;
}
