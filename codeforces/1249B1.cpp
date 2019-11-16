/*
RAone00
Rohit sharma
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

bool compare(int q, int w) {
	return(q > w);
}

int main() {
    fast_io();
    int q; 
    cin >> q;
    while (q--){
		int n;
		cin >> n; 
		vector <int> v(n + 1);
		for (int i = 1; i <= n; ++i) {
			cin >> v[i];
		}
		for (int i = 1; i <= n; ++i)  {
			int cnt = 1, ctr = i;
			while (true) {
				ctr = v[ctr];
				if (ctr == i) {
					break;
				} else {
					++cnt;
				}
			}
			cout << cnt << " "; 
		}
		cout << endl;
	}
    return 0;
}
