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
	bool compare(pair <int, string> p1, pair < int, string > p2) {

	}
	
	int main() {
	    fast_io();
	    int n, m;
	    cin >> n >> m;
	    vector < pair < int, string > > v; 
	    if (m > 1) {
        	for (int i = 0; i < m; ++i) {
        		int a;
        		string s;
        		cin >> a >> s;
        		v.push_back(make_pair(a, s));
        	}

  			}else cout << "0\n";
	    return 0;
	}

 