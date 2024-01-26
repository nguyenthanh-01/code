// 002bai
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define sl (int) 1e5+1
#define sz(a) (int) (a).size()

typedef long long ll;
typedef vector<int> vi;

void sang_nt(vi &);

int main() {
    vi sg(sl, 1); sg[0] = 0;
    sang_nt(sg);
    for(int i = 0; i < 10; i++) {
        cout << sg[i] << ' ';
    }
    /*
    int n; cin >> n;
    while(n--) {
        int a, b;
        cin >> a >> b;
        for(int i = a; i <= b; i++) {
            if(sg[i] != 0) {
                cout << i << ' ';
            }
        }
        cout << endl;
    }
    */
    return 0;
}

void sang_nt(vi &a) {
    for(int i = 2; i < sz(a); i++) {
        if(a[i] != 0) {
            for(int j = i*i; j < sz(a); j += i) {
                a[j] = 0;
            }
        }
    }
}
