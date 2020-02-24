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
	    int tc; 
	    cin >> tc;
	    int a[tc], cum[tc];
	    cin >>a[0];
	    a[0] = cum[0];
	    for (int i = 1; i < tc; ++i) {
	    	cin >> a[i];
	    	cum[i] = cum[i - 1] + a[i];
	    }
	    int currentsum = 0, maxsum = 0;
	    for (int i = 0; i < tc; ++i) {
	    	for (int j = i; j < tc; ++i) {
	    		currentsum = 0;
	    		currentsum = cum[j] - cum[i - 1]; 
	    	}
	    	if (currentsum > maxsum) {
                maxsum = currentsum;
            }    
	    }
	    cout << maxsum << "\n";
	    return 0;
	}

 