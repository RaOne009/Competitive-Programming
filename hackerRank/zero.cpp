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
	    string s;
	    int a;
	    cin >> a;
	    cin >> s;
	    int n = s.size(), k = 0, sum = 0;
	    for (int i = 0; i < n; ++i) {
	    	if (s[i] == 'D') {
	    		sum--;
	    	} else if (s[i] == 'U') {
	    		sum++;  
	    	}
	    	if (sum < 0) {
	    		
	    	}
	    }
	    cout << k << "\n";
	    return 0;
	}

 