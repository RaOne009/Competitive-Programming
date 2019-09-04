#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int a, s, d, f, k = 0;
  cin >> a;
  for (int i = 0; i < a; ++i) {
    cin >> s >> d >> f;
    if ((f + s + d) > 1) {
      ++k;
    }
  }
  cout << k << "\n";
  return 0;
}
