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
      int a[n], b[n], sa[n], sb[n], mx[n];
      for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sa[i] = a[i] * 20;
      }
      for (int j = 0; j < n; ++j) {
        cin >> b[j];
        sb[j] = b[j] * 10;
        }
        for (int k = 0; k < n; ++k) {
          mx[k] = (sa[k] - sb[k]);
          if (mx[k] < 0) {
            mx[k] = 0;
          }
        }
        sort(mx, mx + n);
        cout << mx[n-1] << "\n";
      }
    return 0;
}
