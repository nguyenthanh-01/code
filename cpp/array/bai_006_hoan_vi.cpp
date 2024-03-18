#include <bits/stdc++.h>
using namespace std;
                                                                         
#define sz(a) (int) (a).size()

void dq(string &, int);

int main() {
    string str = "123";
    dq(str, 0);
    return 0;
}

void dq(string &str, int pos) {
    if (pos == sz(str)-1) {
        cout << str << " ";
        return;
    }
    for (int i = pos; i < sz(str); i++) {
        swap(str[i], str[pos]);
        dq(str, pos + 1);
        swap(str[i], str[pos]);
    }
}
