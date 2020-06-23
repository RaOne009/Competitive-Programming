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
#define pw(b,p)         pow(b,p) + 0.1
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
 
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
 
int32_t main()
{
	c_p_c();
	w(t) {
		int n;
		cin >> n;
		for (int k = 2; k < 100; ++k) {
			int din = (pw(2, k) - 1);
			if (n % din == 0) {
				cout << ( n / din ) << "\n";
				break;
			}
		}
	}
	return 0;
}