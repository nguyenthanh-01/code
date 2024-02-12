#include <bits/stdc++.h>
using namespace std;

#define n (int) 1e5
#define array array<bool, n>

void test(array &arr);

int main() {
    array arr;
    arr.fill(1);
    test(arr);
    printf("%d \n", arr[n-1]);
    return 0;
}

void test(array &arr) {
    arr[n-1] = 0;
}
