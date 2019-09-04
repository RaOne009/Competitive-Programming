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
        int t;
        cin >> t;
        int h[t], con = 0, gon = 0;
        for (int i = 0; i < t; ++i) {
            cin >> h[i];
        }
        for (int i = 0; i < t; ++i) {
            if (h[t - i - 1] <= h[t -i - 2]) {
                con++;
            } else if (con == 0) {
                break;
            } else {
                gon++;
            }

        }
        cout << gon + 1 << "\n";
    return 0;
}
