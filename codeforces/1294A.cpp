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
bool comp(int a, int b) 
{ 
    return (a < b); 
} 

int main() {
    fast_io();
    int num;
    cin >> num;
    while (num--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int mx = max({a, b, c}, comp);
        int d = mx - a;
        int f = mx - b;
        int g = mx - c;
        int l = n - (d + f + g);
        if (l % 3){
            cout << "NO\n";
        } else cout << "YES\n";
    }
    return 0;
}
