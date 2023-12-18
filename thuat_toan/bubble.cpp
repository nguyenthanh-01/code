#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define sz(a) (int) (a).size()

typedef long long ll;
typedef vector<int> vi;

void bubble(vi &);
void xuat(vi &);

int main() {
    vi a = {1, 2, 3, 5, 6};
    bubble(a);
    xuat(a);
    return 0;
}

void bubble(vi &a) {
    int n = sz(a) - 1;
    while(n) {
        bool flag = true;
        for(int i = 0; i < n; i++) {
            if(a[i] > a[i + 1]) {
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
                flag = false;
            }
        }
        if(flag) return;
        n--;
    }
}

void xuat(vi &a) {
    for(int &i: a) {
        cout << i << " ";
    }
}
