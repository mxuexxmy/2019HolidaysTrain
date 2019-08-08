//
// Created by longxing on 19-8-7.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int v[1010] ={0}, w[1010] = {0}, dp[1010] ={0} ;
    int n, s, t, p;
    cin >> n >> s >> t;
    int k = t - s, arr = 0;
    for (int i = 0; i < n; ++i) {
         cin >> s >> t >> p;
        if(t - s <= k){
            v[arr] = t -s ;
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
