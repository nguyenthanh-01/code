#include <bits/stdc++.h>
using namespace std;

#define n (int) 1e9
array<bool, n> arr;

void test();

int main() {
    arr.fill(1);
    test();
    printf("%d \n", arr[n-1]);
    return 0;
}

void test() {
    arr[n-1] = 0;
}
