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
    ll tc;
    cin >> tc;
    ll arr[tc];
    for (ll i = 0; i < tc; ++i) {
        cin >> arr[i];
    }
    ll left = -1, right = -1;
    ll currentsum = 0, maxsum = 0;
    for (ll i = 0; i < tc; ++i) {
        for (ll j = i; j < tc; ++j) {
            currentsum = 0;
            for (ll k = i; k < j; ++k) {
                currentsum += arr[k];
            }
            if (currentsum > maxsum) {
                maxsum = currentsum;
                left = i;
                right = j;
            }
        }
    }
    cout << maxsum << "\n";
    for (ll i = left; i < right; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
