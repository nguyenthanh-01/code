#include <bits/stdc++.h>
using namespace std;

#define vector vector<int>

void nhap(vector &);
void xuat(vector &);
void sx_chon(int, vector &);

int main() {
    int n; cin >> n;
    vector vi(n);
    nhap(vi);
    sx_chon(n, vi);
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

void sx_chon(int n, vector &vi) {
    for (int i = 0; i < n - 1; i++) {
        int key = i;
        for (int j = i + 1; j < n; j++) {
            if (vi[key] < vi[j]) {
                key = j;
            }
        }
        swap(vi[i], vi[key]);
    }
}
