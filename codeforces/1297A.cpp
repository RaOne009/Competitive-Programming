 
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
    if (n < 1000) {
    	cout << n << "\n";
    } else if (n > 999 and n < 100000) {
    	cout <<  ((2 * n + 1000) / 2 ) / 1000 << "K\n"; 
    } else {
    	cout << ((2 * n + 1000000) / 2 ) / 1000000 << "M\n";
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