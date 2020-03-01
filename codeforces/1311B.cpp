 
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
    int n, m;
    cin >> n >> m;
    vector < int > a;
    vector < int > p;
    for (int i = 0, i < n; ++i) {
    	cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
    	int pos;
    	cin >> pos;
    	p[pos - 1] = 1;
    }
    for (int i = 0; i < n; ++i) {
    	if (p[i] and a[i] < a[i + 1]) {
    		swap(a[i], a[i + 1]);
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