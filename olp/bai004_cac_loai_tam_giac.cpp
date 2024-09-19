#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double a2 = a * a;
    double b2 = b * b;
    double c2 = c * c;

    if(a >= b + c || b >= a + c || c >= b + a) {
        cout << "KHONG PHAI TAM GIAC\n";
        return 0;
    }

    if(a2 == b2 + c2 || b2 == a2 + c2 || c2 == b2 + a2) {
        cout << "TAM GIAC VUONG\n";
    }
    else if(a2 > b2 + c2 || b2 > a2 + c2 || c2 > b2 + a2) {
        cout << "TAM GIAC TU\n";
    }
    else if(a2 < b2 + c2 || b2 < a2 + c2 || c2 < b2 + a2) {
        cout << "TAM GIAC NHON\n";
    }

    if(a == b && b == c) {
        cout << "TAM GIAC DEU\n";
    }
    else if(a == b || b == c || a == c) {
        cout << "TAM GIAC CAN\n";
    }

    return 0;
}
