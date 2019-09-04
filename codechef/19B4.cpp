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
    int t;
    cin >> t;
    while (t--) {
      int n;
      cin >> n;
      int c[n], h[n], a[n + 1] = {0};
      for (int i = 0; i < n; ++i) {
        cin >> c[i];
        int r = i - c[i];
        if (r < 0) {
          r = 0;
        }
        int p = i + c[i];
        if (p > n - 1) {
          p = n - 1;
        }
        a[r] += 1;
        a[p + 1] -= 1;
      }
      for (int i = 1; i < n; ++i) {
        a[i] += a[i - 1];
      }
      for (int j = 0; j < n; ++j) {
        cin >> h[j];
      }
      sort(h, h + n);
      sort(a, a + n);
      int count = 0;
      for (int l = 0; l < n; ++l) {
        if (a[l] == h[l]) {
          ++count;
        }
      }
      if (count == (n)) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
    return 0;
}
