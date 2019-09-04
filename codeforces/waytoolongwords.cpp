  #include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int a , n , i;
  std::cin >> a;
  for (size_t i = 0; i < a; i++){
      string s ;
    std::cin >> s;
    n = s.size();
    if (n <= 10) {
      std::cout << s << '\n';
    }
    else{
      std::cout << s[0] << n-2 << s[n-1] << '\n';
    }
  }
  return 0;
}
