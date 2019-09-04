#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  cin >> s;
  int n = s.size();
  int a[n/2+1];
  for (int i = 0; i <= n; i+=2) {
    a[i/2] = s[i] - '0';
  }
  sort( a, a + n/2 + 1);
  for (int i = 0; i < n/2; ++i) {
    cout << a[i] << "+";
  }
  cout << a[n/2] << "\n";
  return 0;
}
