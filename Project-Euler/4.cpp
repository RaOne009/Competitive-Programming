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
    string num;
    int i, j, k, mid, count, ans = 0;
    for (int i = 999; i >= 100; --i) {
        for (int j = 999; j >= 100; --j) {
            num = to_string(i * j);
            mid = (num.length() / 2);
            bool bad = false;
            for (int k = 0; k < mid; k++) {
                if (num[k] != num[num.length() - k - 1]) {
                    bad = true;
                }
            }
            if (!bad) {
                ans = max(ans, stoi(num));
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
