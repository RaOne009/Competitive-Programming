#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string animal[2][3]{
    {"fox","dog","cat"},
    {"apple","orange","banana"}
  };
  for (size_t i = 0; i < 2; i++) {
    for (size_t k = 0; k < 3; k++) {
      std::cout << animal[i][k] << " " <<'\n';
    }
  }
  return 0;
}
