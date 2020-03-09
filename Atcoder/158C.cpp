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
	    int a, b;
	    cin >> a >> b;
	    for (int i = 1; i < 1009; ++i) {
	    	int x = i * 0.08;
	    	int y = i * 0.1;
	    	if ((a == x) && (b == y)) {
	    		cout << i << "\n";
	    		return 0;
	    	} 
	    }
	    cout << "-1\n";
	    return 0;
	}

  