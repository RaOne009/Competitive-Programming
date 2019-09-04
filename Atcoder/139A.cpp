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
    // int s, t;
    // cin >> s >> t;
    // char s1, s2, s3, t1, t2, t3, count = 0;
    // cin >> s1 >> s2 >> s3;
    // cin >> t1 >> t2 >> t3;
    // if (s1 == t1) {
    //     count++;
    // } else if (s2 == t2) {
    //     count++;
    // } else if (s3 == t3) {
    //     count++;
    // }
    // cout << count << "\n";
    string s;
    string t;
    int count = 0;
    cin >> s >> t;
    for (int i = 0; i < 3; ++i) {
        if (s[i] == t[i]) {
            count ++;
        }
    }
    cout << count << "\n";
    return 0;
}
