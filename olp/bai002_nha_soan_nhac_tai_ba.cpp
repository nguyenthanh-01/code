#include <bits/stdc++.h>
using namespace std;

#define n 8

typedef array<int, n> arr;

int main() {
    arr music;

    for(int &i : music) {
        cin >> i;
    }

    if(music[0] > music[1]) {
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(music[i] <= music[j]) {
                    cout << "KHONGBIET";
                    return 0;
                }
            }
        }

        cout << "GIAM";
    }
    else {
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(music[i] >= music[j]) {
                    cout << "KHONGBIET";
                    return 0;
                }
            }
        }

        cout << "TANG";
    }

    return 0;
}
