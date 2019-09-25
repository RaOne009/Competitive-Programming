#include<bits/stdc++.h>
#include<string>
using namespace std;
 int main() {
  int i1 = 4;
  double d1 = 4;
  string s1("HackerRank");
  int i2;
  double d2;
  string s2;
  std::cin >> i2>>d2;
  getline(cin,s2);
  i2= i2+i1;
  d2= d2+d1;
  std::cout << i2<<endl <<d2<<endl<<s1 ;
  cout<<s2<<endl;

  return 0;
}
