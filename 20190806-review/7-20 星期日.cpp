//
// Created by longxing on 19-8-6.
//
#include <bits/stdc++.h>
using namespace std;
typedef   long long ll;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
      ll  n, ans = 0, k = 0;
       cin >> n;
        for (ll i = 1; i <= n; ++i) {
            k = i;
             while (k){
                 if(k % 10 == 7) break;
                 k /= 10;
             }
            if(!k && i % 7 != 0) ans += i*i;
        }
        cout << ans <<endl;
    }
    return 0;
}
