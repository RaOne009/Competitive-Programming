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
    ll num,zero = 0, ans = 0, negative = 0;
    while (a--) {
        cin >> num;
        if (num >= 1) {
            ans += num - 1;
        } else if (num <= -1) {
            ans += - num - 1;
            negative++;
        } else {
            zero++;
        }
    }
    if (negative % 2 != 0 and zero == 0) {
        ans += 2;
    }
    cout << zero + ans << "\n";
    return 0;
}
