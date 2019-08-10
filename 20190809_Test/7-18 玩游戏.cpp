//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
int v[1100], w[1100], dp[1100];
int main(){
    ios::sync_with_stdio(false);
    memset(v, 0, sizeof(v));
    memset(w, 0, sizeof(w));
    memset(dp, 0, sizeof(dp));
    int n, s, t, k, p, arr = 0;
    cin >> n >> s >> t;
    k = t- s;
    for (int i = 0; i < n; ++i) {
       cin >> s >> t >> p;
        if(t - s <= k){
            v[arr] = t - s;
            w[arr] = p;
            arr++;
        }
    }
    for (int i = 0; i < arr; ++i) {
        for (int j = k; j >= v[i] ; --j) {
          dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
        }
    }
    cout << dp[k] <<endl;
    return 0;
}
