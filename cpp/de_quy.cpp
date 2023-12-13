#include <bits/stdc++.h>
using namespace std;

void dq(int);

int main() {
  int a;
  cin >> a;
  int tmp = 1 << a;
  for(int i = 1; i < tmp; i++) {
    dq(i);
    cout << "\n";
  }
  return 0;
}

void dq(int a) {
  if(a == 0) return;
  dq(a / 2);
  cout << a % 2;
}
