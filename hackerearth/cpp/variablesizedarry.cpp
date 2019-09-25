#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    int r, q, n_v;
    cin >> r >> q;
    int *arr[r];
    for(int i=0 ; i<r ; i++){
        cin >> n_v;
        arr[i] = new int[n_v];
        for(int j=0 ; j<n_v ; j++){
            cin >> arr[i][j];

        }
    }
    for(int i=0 ; i<q ; i++){
        int val, val1;
        cin >> val >> val1;
        cout << arr[val][val1] << endl;
    }
    return 0;
}
