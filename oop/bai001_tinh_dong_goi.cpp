#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class sinhvien {
    private:
        string ten, ngaysinh, lop;
        double gpa;
    public:
        void nhap();
        void xuat();
};

void sinhvien::nhap() {
    getline(cin, ten);
    cin >> ngaysinh >> lop >> gpa;
}

void sinhvien::xuat() {
    cout << ten << " " << ngaysinh << " " << lop << " " << gpa << "\n";
}

int main() {
    sinhvien a;
    a.nhap();
    a.xuat();
    return 0;
}
