//
// Created by longxing on 19-8-6.
//

#include <bits/stdc++.h>
using namespace std;
int v[1010], w[1010];
long long dp[1010];
int main(){
    ios::sync_with_stdio(false);
    int n, s, t, k, p;
    memset(v, 0, sizeof(v));
    memset(w, 0, sizeof(w));
    cin >> n >> s >> t;
    k = t - s;
    int arr = 0;
    for (int i = 1; i <= n; ++i) {
          cin >> s >> t >> p;
           if(t- s <= k){
               arr++;
               v[arr] = t- s;
               w[arr] = p;
           }
    }
    //cout << k << " " <<arr<<endl;
   memset(dp,0,sizeof(dp));
    for (int i = 1; i <= arr; i++) {
        for (int j = k; j >= v[i] ; j--) {
            dp[j] = max(dp[j], dp[j -v[i]] + w[i]);
        }
    }
    cout << dp[k] <<endl;
    return 0;
}