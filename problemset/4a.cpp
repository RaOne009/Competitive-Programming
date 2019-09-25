#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
   int a;
   std::cin >> a;
   if (a==0) {
     std::cout << "NO" << '\n';
     /* code */
   }

   if (a%4==0) {
     std::cout << "YES" << '\n';
   }
   else{

     std::cout << "NO" << '\n';
   }
  return 0;
}
