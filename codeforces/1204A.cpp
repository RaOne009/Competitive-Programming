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
    string binary;
    cin >> binary;
    ll n = binary.length();
    int count = 0, d = 0;
    for (ll i = n - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            count += pow(2, n - i - 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (pow(4, i) < count) {
            d++;
        }
    }
    cout << d << "\n";
    return 0;
}
