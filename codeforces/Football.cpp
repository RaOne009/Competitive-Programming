#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  cin >> s;
  int n = s.length();
  for (int i = 0; i < n; ++i) {
    if (i + 6 > n + 1){
      break;
    }
    bool ok = true;
    for (int j = i + 1; j <= i + 6; ++j) {
      if (s[i] != s[j]) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
