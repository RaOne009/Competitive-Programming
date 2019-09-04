#include <bits/stdc++.h>
using namespace std;

/*int main() {
  long long a,s,d,f,g;
  std::cin >> a>>s>>d;
  f=a/d;
  g=s/d;
  if (a%d!=0) {
    f+=1;
  }
  if (s%d!=0) {
    g+=1;
  }
  std::cout << f*g ;
    return 0;
}*/
int main(int argc, char const *argv[]) {
long long a , s , d;
std::cin >> a >> s >> d;
std::cout << (long long) (ceil(a*1.0/d))*(ceil(s*1.0/d)) << '\n';
  return 0;
}
