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
    ll a, s;
    cin >> a >> s;
    if (a % 3) {
        cout << a << "\n";
        cout << (s % 3 ? "Alice\n" : "Bob\n");
    } else {
        ll as = s % (a + 1);
        if (as % 3) {
                cout << as << "\n";
            cout << "Alice" << "\n";
            return;
        }
        if (as == a) {
            cout << "Alice\n";
                cout << as << "\n";
        } else {
            cout << "Bob\n";
        }
    }
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
