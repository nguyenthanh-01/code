#include <bits/stdc++.h>
using namespace std;

#define n 5

typedef long long ll;

int main() {
    array<int, n> arr;
    for (int &i: arr) {
        cin >> i;
    }
    swap(arr[0], arr.back());
    printf("%d %d \n", arr[0], arr.back());
    return 0;
}
