#include <bits/stdc++.h>
using namespace std;

#define vector vector<int>

void nhap(vector &);
void xuat(vector &);
void sx_noi_bot(int, vector &);

int main() {
    int n; cin >> n;
    vector vi(n);
    nhap(vi);
    sx_noi_bot(n, vi);
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

void sx_noi_bot(int n, vector &vi) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vi[j] < vi[j+1]) {
                swap(vi[j], vi[j+1]);
            }
        }
    }
}
