 
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
    int a;
    cin >> a;
    int ar[a], ae[a];
    for (int i = 0; i < a; ++i) {
    	cin >> ar[i];
    }
    for (int i = 0; i < a; ++i) {
    	cin >> ae[i];
    }
    sort(ae, ae + a);
    sort(ar, ar + a);
    // for (int i = 1; i <= a; ++i) {
    // 	if ((ar[i] == ar[i + 1]) && (ae[i] == ae[i + 1])) {
    // 		swap(ar[i], ar[i + 1]);
    // 	}
    // }
    for (int i = 0; i < a; ++i) {
    	cout << ar[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < a; ++i) {
    	cout << ae[i] << " ";
    }
    cout << "\n";
    

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