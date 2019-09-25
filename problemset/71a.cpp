#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int a;
  std::cin >> a;
    while (a--) {
    int d;
    string s;
    cin >> s;
    d = s.length();
    if (d > 10) {
      std::cout << s[0]<< d-2 <<s[d-1] << '\n';
    }
    else
    std::cout << s << '\n';
  }
  return 0;
}
