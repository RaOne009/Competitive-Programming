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
    int tc;
    cin >> tc;
    int arr[60], in_put;
    while (tc--) {
    cin >> in_put;
    arr[0] = 0, arr[1] = 1;
    for (int i = 2; i < 60; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
       int res = 0;

    }

    return 0;
}
