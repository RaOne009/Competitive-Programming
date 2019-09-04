#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int a;
  cin >> a;
  string s;
  cin >> s;
   long long A = 0, E = 0, I = 0, O = 0, U = 0;
  for (int i = 0;i < a; ++i) {
    if (s[i] == 'a') {
       A += 1 * (i + 1);
    } else if (s[i] == 'e') {
       E += 5 * (i + 1);
    } else if (s[i] == 'i') {
       I += 9 * (i + 1);
    } else if (s[i] == 'o') {
       O += 15 * (i + 1);
    } else if (s[i] == 'u') {
       U += 21 * (i + 1);
    }
  }
  long long sum = A + I + O + U + E;
  cout << sum<< "\n";
  return 0;
}
