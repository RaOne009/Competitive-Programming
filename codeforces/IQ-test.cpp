/*
RAone00
Rohit sharma
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair < ll, ll > pll;
typedef vector < vector < ll > > matrix;
typedef vector < ll > vll;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

int main() {
    fast_io();

    return 0;
}
int main(int argc, char const *argv[]) {
  int a;
  cin >> a;
  int arr[a];
  for (int i = 0; i < a; ++i) {
    cin >> arr[i];
  }
  int cnt = 0;
  for (int i = 0; i < a; ++i) {
    if (arr[i] % 2 == 1) {
      ++cnt;
    }
  }
  if (cnt == 1) {
    for (int i = 0; i < a; ++i) {
      if (arr[i] % 2 == 1) {
        cout << i + 1 << "\n";
        return 0;
      }
    }
  } else {
    for (int i = 0; i < a; ++i) {
      if (arr[i] % 2 == 0) {
        cout << i + 1 << "\n";
        return 0;
      }
    }
  }
  return 0;
}
