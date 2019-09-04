#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  int a, A, I, O, E, U;
  cin >> a;
  while (a != 0) {
    cin >> s;
  }
  for (int i = 0;i < a; ++i) {
    if (s[i] == 'a') {
       A = 1 * s[i];
    } else if (s[i] == 'e') {
       E = 5 * s[i];
    } else if (s[i] == 'i') {
       I = 9 * s[i];
    } else if (s[i] == 'o') {
       O = 15 * s[i];
    } else if (s[i] == 'u') {
       U = 21 * s[i];
    }
  }
  int sum = A + I + O + U + E;
  cout << sum;
  return 0;
}
