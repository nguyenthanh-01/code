#include <bits/stdc++.h>
using namespace std;
                                                 
#define n 6
#define m 5

int main() {
    array<int, n> arr1 = {1, 3, 5, 7, 9, 11};
    array<int, m> arr2 = {2, 4, 6, 8, 10};
    array<int, n+m> arr3;
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) arr3[k++] = arr1[i++];
        else arr3[k++] = arr2[j++];
    }
    while (i < n) arr3[k++] = arr1[i++];
    while (j < m) arr3[k++] = arr2[j++];
    
    for (int &i: arr3) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
