#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define ff              first
#define ss              second
#define ll             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin >> x; while (x--) 
#define w(y)            int q; cin >> q; while (q--) { int tc; cin >> tc; for(int i = 0; i < tc; i++) } 
#define pw(b,p)         pow(b,p) + 0.1
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
 
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
 
int32_t main()
{
	c_p_c();
	 w(x) {
    	int n; 
    	cin >> n;
    	int a[n];
    	for (int i = 0; i < n; i++) {
            cin >> a[i];
    	}
    	map < int, vi > vd;
    	for (int i =0; i < n; i++) {
    		vd[a[i]].push_back(i);
    	}
    	for (auto q : vd) {
    		if (q.ss.size() >= 3) {
    			cout << "Yes\n";
    			return 0;
    		}
    	}
    	for (auto el : vd){
			if (el.ss.size() == 2 && el.ss[0] != el.ss[1] - 1) {
				cout << el << "\n";
    			return 0;
			}
		}
		cout << "No\n";
    }
	return 0;
}