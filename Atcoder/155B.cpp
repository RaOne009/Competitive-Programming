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
	    int a[n];
	    for (int i = 0; i < n; ++i) {
	    	cin >> a[i];
	    }
	    int s = 0, d = 0;
	    for (int i = 0; i < n; ++i) {
	    	if (a[i] % 2 == 0) {
	    		d++;
	    		if ((a[i] % 3 == 0) || (a[i] % 5 == 0)) s++;
                else {
                	cout << "DENIED\n";  
                	return 0;
                }
	    	}
	    }
	    cout << "APPROVED\n";
	    return 0;
	}

 