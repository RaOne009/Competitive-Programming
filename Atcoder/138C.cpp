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
    double s[a], f, g, h;
    for (int i = 0; i < a; ++i) {
      cin >> s[i];
    }
    sort(s, s + a);
    if (a > 2) {
      f = (s[a - 3] + s [a - 2]) / 2;
      g = (f + s[a - 1]) / 2;
      cout << g << "\n";
    } else {
      h = (s[a - 2] + s[a - 1]) / 2;
      cout << h << "\n";
    }
    return 0;
}
