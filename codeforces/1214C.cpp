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
    string arr;
    for (int i = 0; i < tc; ++i) {
        cin >> arr;
    }
    int mid = tc / 2;
    cout << mid << "\n";
    if (tc % 2 == 0) {
        int no = 0;
        for (int i = 0; i < mid; ++i) {
            if (arr[mid - i] != arr[mid + i + 1]) {
                no++;
            }
        }
        if (no == mid and (arr[0] == '(' or arr[1] == '(')) {
            cout << "Yes" << "\n";
        }
    } else {
        cout << "No" << "\n";
    }
    return 0;
}
