#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  cin >> s;
  bool h = false, a = false, b = false, c = false, d = false;
  for (int i = 0; i <= s.length() - 1; ++i){
    if (s[i] == 'h'){
      h = true;
    } else if (h && s[i] == 'e'){
      a = true;
    } else if (a && !b && s[i] == 'l'){
      b = true;
    } else if (b && s[i] == 'l'){
      c = true;
    } else if (c && s[i] == 'o'){
      d = true;
    }
  }
  if (d) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}
