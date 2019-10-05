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
    ll n, k;
    cin >> n >> k;
    ll d[n];
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }
    deque < int > dq;
    set < int > st;
    for (int i = 0; i < n; ++i) {
        if (dq.size() != k) {
            if (!st.count(d[i])) {
                st.emplace(d[i]);
                dq.push_front(d[i]);
            }
        } else {
            if (!st.count(d[i])) {
                st.emplace(d[i]);
                st.erase(dq.back());
                dq.pop_back();
                dq.push_front(d[i]);
            }
        }
    }
    cout << dq.size() << "\n";
    for (auto &x: dq) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
