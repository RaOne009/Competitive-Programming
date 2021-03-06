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
    ll a;
    cin >> a;
    while (a != 1) {
        if (a % 2 == 0) {
            cout << a << " ";
            a /= 2;
        } else {
            cout << a << " ";
            a = ( a * 3 ) + 1;
        }
    }
    cout << "1\n";
    return 0;
}
