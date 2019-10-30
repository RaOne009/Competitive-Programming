/*
RAone00
Rohit Sharma
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

void solve() {
    int n;
    cin >> n;
    set < int > st;
    int pos[110];
    for (int i = 0, a; i < n; ++i) {
        cin >> a;
        pos[a] = i;
        st.emplace(a);
        if (st.size() == 3) {
            auto it = st.begin();
            ++it;
            st.erase(it);
        }
    }
    int fir = *st.begin(), sec = *st.rbegin();
    if (pos[fir] > pos[sec]) {
        swap(fir, sec);
    }
    cout << fir << " " << sec << "\n";
}

int main() {
    fast_io();
    ll tc;
    cin >> tc;
    for (ll i = 1; i <= tc; ++i) {
        solve();
    }
    return 0;
}
