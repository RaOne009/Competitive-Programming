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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << ((a+b==c+d||a+c==b+d||a+d==b+c||a==b+c+d||b==a+c+d||c==a+b+d||d==a+b+c)?"YES\n":"NO\n");
    return 0;
}
