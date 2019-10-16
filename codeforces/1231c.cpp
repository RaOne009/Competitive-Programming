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
    int n, n1;
    ll sum = 0;
    cin >> n >> n1;
    ll a[n][n1];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n1; ++j) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    for (int i = n - 2; i >= 0; --i) {
        for (int j = n1 - 2; j >= 0; --j) {
            if (a[i][j] == 0) {
                int nw = min(a[i][j + 1] - 1, a[i + 1][j] - 1);
                if ((j - 1 >= 0 && nw <= a[i][j - 1]) || (i - 1 >= 0 && nw <= a[i - 1][j]) || (nw <= 0)) {
                    cout << "-1\n";
                    return 0;
                }
                sum += nw;
                a[i][j] = nw;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n1; ++j) {
            if ((i - 1 >= 0 && a[i][j] <= a[i-1][j]) || (j - 1 >= 0 && a[i][j] <= a[i][j-1])){
				cout << "-1\n";
				return 0;
            }
        }
    }

    cout << sum << "\n";
    return 0;
}
