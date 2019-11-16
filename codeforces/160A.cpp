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
bool compare(int q, int w) {
	return(q > w);
}
int main() {
    fast_io();
    int n; 
    cin >> n;
    int sum = 0, cnt = 0;
    vector <int> v;
    for (int i = 0; i < n; ++i) {
		int temp;
		cin >> temp;
		sum += temp;
		v.pb(temp);
	} 
	int a = 0;
	sort(v.begin(), v.end(), compare);
	for (int  i = 0; i < n; ++i) {
		a += v[i];
		if ((sum - a) >= a) {
			++cnt;
		} else {
			cnt  = cnt + 0;
		}
		
	}
	cout << cnt + 1 << endl;
    return 0;
}
