 
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
    int a, b;
    cin >> a >> b;
    int ar[a]; 
    int sum = 0;
    for (int i = 0; i < a; ++i) {
    	cin >> ar[i];
    	sum += ar[i];
    }
    float avg = sum / float(a) ;
    if ((b / float(a)) <= avg) {
    	cout << b << "\n";
    } else {
    	int f = (avg * a);
    	cout << f << "\n";
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