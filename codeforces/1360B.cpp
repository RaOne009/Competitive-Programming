 
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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
    	cin >> a[i];
    }
    int ch = 99999999;
    sort(a, a + n);
    for (int i = n - 1; i > 0; --i) {
    	int c = a[i] - a[i - 1];
    	// cout << c << " " << ch << endl;
    	ch = min(ch, c);
    }
    cout << ch << "\n";

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