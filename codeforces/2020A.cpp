	/*
	RAone00
	Rohit sharma
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

	
	int main() {
	    fast_io();
	    int n; 
	    cin >> n;
	    int r[n], p[n]; 
	    for (int i = 0; i < n; ++i) {
	    	cin >> r[i];
	    }
	    for (int i = 0; i < n; ++i) {
	    	cin >> p[i];
	    }
	    int c = 0, d = 0;
	    for (int i = 0; i < n; ++i) {
	    	if ((p[i] == 1) && (r[i] == 0)) {
	    		c++;
	    	} else if ((p[i] == 0) && (r[i] == 1)) {
	    		d++;
	    	} 
	    }
	    if (d == 0) {
	    	cout << "-1\n";
	    } else {
	    	cout << ((c / d) + 1) << "\n";
	    }
	    return 0;
	}

 