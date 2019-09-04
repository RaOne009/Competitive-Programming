#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string a, s;
  cin >> a >> s;
  for (int i = 0; i <= s.size(); ++i) {
    if (tolower(s[i]) < tolower(a[i]) ) {
      cout << "1\n";
      return 0;
    } else if (tolower(s[i]) > tolower(a[i]) ) {
      cout << "-1\n";
      return 0;
    }
  }
   cout << "0\n";
  return 0;
}
