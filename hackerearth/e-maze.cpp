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
	string s;
	cin >> s;
	map < char, int > mp;
	for (int i = 0; i < s.size(); ++i) {
		mp[s[i]]++;
	}
	int a = (mp['R'] - mp['L']);
	int d = (mp['U'] - mp['D']);
	cout << a << " " << d << endl;

	return 0;
}