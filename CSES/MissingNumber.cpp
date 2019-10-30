/*
RAone00
Rohit Sharma
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

void solve() {

}

int main() {
    fast_io();
    ll tc, sum = 0;
    cin >> tc;
    int a[tc] ;
    for (ll i = 1; i <= tc - 1; ++i) {
        cin >> a[i];
        sum += a[i];
        solve();
    }
    cout << ((tc * (tc + 1) / 2) - sum) << "\n";
    return 0;
}
