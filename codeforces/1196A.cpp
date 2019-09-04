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
      int a;
      cin >> a;
      for (int i = 0; i < a; ++i) {
        int n, k, d = 0;
        cin >> n >> k;
        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
          cin >> v[i];
          d += v[i] % 2;

        }
        if (d >= k && (d - k) % 2  == 0) {
          cout << "YES\n";
          for ( int i = 0; i < n; ++i) {
            if (k == 1) break;
            if (v[i] % 2 != 0) {
              cout << i + 1 << " ";
              k--;
            }
          }
          cout << n << "\n";
        } else cout << "NO\n";
      }
    return 0;
}
