#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  char s;
  while (cin >> s)
  {
    s = tolower(s);
    if (!(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'y')){
      std::cout << "." << s;
    }
  }
  return 0;
}
