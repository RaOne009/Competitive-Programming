 
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

	bool compare(pair <int, int> p1, pair <int, int> p2) {
	int d1 = p1.first * p1.first + p1.second * p1.second;
	int d2 = p2.first * p2.first + p2.second * p2.second;
	if (d1 == d2) {
		return p1.first < p2.first;
	}
	return d1 < d2;
}
vector < pair  <int, int> > v;

void solve() {
	int x, y;
	cin >> x >> y;
	v.push_back(make_pair(x, y));
}

int main() {
    fast_io();
    ll tc;
    cin >> tc;
    for (ll i = 1; i <= tc; ++i) {
        solve();
    }
    sort(v.begin(), v.end(), compare);
    for (auto a: v) {
        cout << a.first << a.second << "\n";
    } 
    
    return 0;
}