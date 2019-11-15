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
    int a;
    cin >> a;
    int g = a;
    vector < int > vec;
    while (a--) {
		int temp;
		cin >> temp; 
		vec.pb(temp);
	}
	int e = vec.size();
	sort(vec.begin(), vec.end(), compare);
	ll s = 0, d = 0;
	if (g % 2 == 0) {
		for (int i = 0; i < e; ++i) {
			 if (i < g /2){
				s += vec[i]; 
			 } else {
				d += vec[i]; 
			 }
		}
   } else {
			for (int i = 0; i < e; ++i) {
			 if (i <= g /2){
				s += vec[i]; 
			 } else {
			    d += vec[i]; 
			 }
		}
 	}
 	cout << ((s * s) + (d * d)) << "\n";
    return 0;
}
