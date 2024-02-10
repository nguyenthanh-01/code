#include <bits/stdc++.h>
using namespace std;

#define n 5
#define fb(a) (a).front(), (a).back()

typedef long long ll;

int main() {
    array<int, n> arr;
    for (int &i: arr) {
        cin >> i;
    }
    swap(fb(arr));
    printf("%d %d \n", fb(arr));
    return 0;
}
