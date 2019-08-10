//
// Created by longxing on 19-8-8.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long v[1010] ={0}, w[1010]={0}, dp[1010] ={0};
    int n, m,s, t, p, arr = 0;
    cin >> n >> s >> t;
    m = t - s;
    for (int i = 0; i < n; ++i) {
       cin >> s >> t >> p;
        if(t- s <= m){
          v[arr] = t - s;
          w[arr] = p;
            arr++;
        }
    }
    for (int i = 0; i < arr; ++i) {
        for (int j = m; j >= v[i] ; --j) {
             dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
        }
    }
  cout << dp[m] <<endl;
    return 0;
}
