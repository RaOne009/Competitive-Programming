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
//     for (int i = 1; i < 99999999; ++i) {
//         if (i % 12 == 0 and i % 14 == 0 and i % 18 == 0 and i % 16 == 0 and i % 11 == 0 and i % 13 == 0 and i % 15 == 0 and i % 17 == 0 and i % 19 == 0) {
//             cout << i << "\n";
//             break;
//         }
//     }
int i = 1;

while ( i % 11 != 0 || i % 12 != 0 || i % 13 != 0 ||
     i % 14 != 0 || i % 15 != 0 || i % 16 != 0 || i % 17 != 0 ||
     i % 18 != 0 || i % 19 != 0  ){
i++;
}
cout << i;
     return 0;
 }
