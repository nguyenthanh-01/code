#include <bits/stdc++.h>
using namespace std;

void dq(int);

int main() {
  int a;
  cin >> a;
  dq(a);
  return 0;
}

void dq(int a) {
  if(a == 0) return;
  dq(a / 2);
  cout << a % 2;
}
