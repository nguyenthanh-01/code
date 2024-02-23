#include <bits/stdc++.h>
using namespace std;

#define vector vector<int>

void nhap(vector &);
void xuat(vector &);
void sx_chen(int, vector &);

int main() {
    int n; cin >> n;
    vector vi(n);
    nhap(vi);
    sx_chen(n, vi);
    xuat(vi);
    return 0;
}

void nhap(vector &vi) {
    for (int &i: vi) {
        cin >> i;
    }
}

void xuat(vector &vi) {
    for (int &i: vi) {
        cout << i << " ";
    }
    cout << "\n";
}

void sx_chen(int n, vector &vi) {
    for (int i = 1; i < n; i++) {
        int key = i - 1;
        int val = vi[i];
        while (key >= 0 && val > vi[key]) {
            vi[key+1] = vi[key];
            key--;
        }
        vi[key+1] = val;
    }
}
