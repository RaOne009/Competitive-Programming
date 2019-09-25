#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n , i ;
  std::cin >> n;
  int numA[n] , numS[n] , sum[n];
  for (size_t i = 0; i < n ; i++) {
    std::cin >> numA[i];
  }
  for (size_t i = 0; i < n; i++) {
     std::cin >> numS[i];
  }
  for (size_t i = 0; i < n ; i++) {
    std::cout << numA[i] + numS[i] << " ";
  }
  std::cout << endl;
  return 0;
}
