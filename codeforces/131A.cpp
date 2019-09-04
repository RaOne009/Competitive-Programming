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
    string s;
    cin >> s;
    int m = 0, a = 'a' - 'A';
    for (int i = 1; i < s.size(); ++i) {
      if (isupper(s[i])) {
        ++m;
      }
    }
    if (m != s.size() - 1) {
      cout << s << "\n";
    } else if (m == s.size() - 1) {
      if (isupper(s[0])) {
        cout << char(tolower(s[0]));
      } else {
      cout << char(toupper(s[0]));
      }
      for (int i = 1; i < s.size(); ++i) {
        cout << char(tolower(s[i]));
      }
      cout << "\n";
    }
    return 0;
}
