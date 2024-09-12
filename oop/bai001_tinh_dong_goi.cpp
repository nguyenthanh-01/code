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
        void setten(string newten);
        string getten();
};

void sinhvien::nhap() {
    getline(cin, ten);
    cin >> ngaysinh >> lop >> gpa;
}

void sinhvien::xuat() {
    cout << ten << " " << ngaysinh << " " << lop << " " << gpa << "\n";
}

void sinhvien::setten(string newten) {
    ten = newten;
}

string sinhvien::getten() {
    return ten;
}

int main() {
    sinhvien a;

    a.nhap();
    a.xuat();

    a.setten("a");
    a.xuat();

    string b = a.getten();
    cout << b;

    return 0;
}
