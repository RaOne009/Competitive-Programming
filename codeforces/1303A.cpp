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
	string  as;
	int sat_in() {
		for (int i = 0; i < as.size(); ++i) {
			if (as[i] == '1') {
				int d = i;
				return i;
			}
		}
		return -1;
	}
	int end_in() {
		for (int i = as.size() -1; i > -1; --i) {
			if (as[i] == '1') {
				int f = i;
				return i;
			}
		}
		return -1;
	}
	int main() {
	    fast_io();
	    int tet; 
	    cin >> tet;
	    while (tet--) {
	    	int sum = 0;
	    	cin >> as;
	    	int g = sat_in();
	    	int h = end_in();
	    	for (int i = g; i < h; ++i) {
	    		if (as[i] == '0') {
	    			++sum;
	    		}
	    	}
	    	cout << sum << "\n"; 
	    }
	}

 