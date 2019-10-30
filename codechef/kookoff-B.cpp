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
    ll n;
    cin >> n;
    int cnt = 0, two = 0;
    while (n % 10 == 0) {
        n /= 10;
        ++cnt;
    }
    while (n % 2 == 0) {
        n /= 2;
        ++two;
    }
    if (n != 1) {
        cout << "No\n";
        return;
    }
    if (two > cnt) {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
}

int main() {
    fast_io();
    ll tc;
    cin >> tc;
    for (ll i = 1; i <= tc; ++i) {
        solve();
    }
    return 0;
}
