#include <bits/stdc++.h>
using namespace std;

int dq(int, int);

int main() {
  int a;
  cin >> a;
  cout << dq(a, 0);
  return 0;
}

int dq(int a, int x) {
  if(a == 0) return x;
  return dq(a - 1, x + a);
}
