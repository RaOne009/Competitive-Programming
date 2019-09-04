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
    int a, s;
    cin >> a >> s;
    int n1 = (a + s);
    int n2 = (a - s);
    int n3 = (a * s);
        if(n1 > n2 && n1 > n3)
    {
        cout << n1 << "\n";
    }
    if(n2 > n1 && n2 > n3)
    {
        cout << n2 << "\n";
    }
    if(n3 > n1 && n3 > n2) {
        cout << n3 << "\n";
    }
  //  cout << max({n1, n2, n3});
    return 0;
}
