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
    ll n, m;
    ll cnt = 0;
    cin >> n >> m;
    for (int i = 1; i < 10; ++i) {
        cnt += (m * i) % 10;
    }
    ll d = ((n / m) / 10);
    cnt = (cnt * d);
    int f = ((n / m) % 10);
    for (int i = 0; i <= f; ++i) {
        cnt += (m * i) % 10;
    }
    cout << cnt << "\n";
}

int main() {
    fast_io();
    ll tc;
    cin >> tc;
    for (ll i = 1; i <= tc; ++i) {
        solve();/*
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
            ll tc;
            cin >> tc;
            for (ll i = 1; i <= tc; ++i) {
                solve();
            }
            return 0;
        }
    }
    return 0;
}
