// 002bai
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define sl (int) 1e6+1
#define sz(a) (int) (a).size()

typedef long long ll;
typedef vector<bool> vb;

void sang_nt(vb &);
int check(int);

int main() {
    vb sang(sl, 1);
    sang_nt(sang);
    int n; cin >> n;
    while(n--) {
        int a, b;
        cin >> a >> b;
        a = check(a);
        for(int i = a; i <= b; i += 2) {
            if(sang[i] != 0) {
                cout << i << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

void sang_nt(vb &a) {
    for(int i = 2; i*i < sz(a); i++) {
        if(a[i] != 0) {
            for(int j = i*i; j < sz(a); j += i) {
                a[j] = 0;
            }
        }
    }
}

int check(int a) {
    if(a < 3) {
        cout << 2 << ' ';
        return 3;
    }
    if(a%2 == 0) {
        return a += 1;
    }
    return a;
}
