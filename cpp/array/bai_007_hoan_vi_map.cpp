#include <bits/stdc++.h>
using namespace std;
                                                                         
#define sz(a) (int) (a).size()
#define map map<string, int>
#define fi first

void dq(string &, map &, int);

int main() {
    string str = "122";
    map mp;
    dq(str, mp, 0);
    for (auto &i: mp) {
        cout << i.fi << " ";
    }
    return 0;
}

void dq(string &str, map &mp, int pos) {
    if (pos == sz(str)-1) {
        mp[str]++;
        return;
    }
    for (int i = pos; i < sz(str); i++) {
        swap(str[i], str[pos]);
        dq(str,mp ,pos + 1);
        swap(str[i], str[pos]);
    }
}
