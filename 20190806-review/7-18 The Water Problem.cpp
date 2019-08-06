//
// Created by longxing on 19-8-6.
//

#include <bits/stdc++.h>
using namespace std;
const  int INF = 0x3f3f3f3f;
int a[1050];
int main(){
    ios::sync_with_stdio(false);
    int t, k, l, r, m, MAX;
    cin >> t;
    while (t--){
       cin >> k;
        for (int i = 1; i <= k; ++i) {
             cin >> a[i];
        }
       cin >> m;
        while(m--) {
            MAX = -INF;
          cin >> l >> r;
            if(l > r) swap(l, r);
            for (int i = l; i <= r ; ++i) {
               MAX = max(MAX, a[i]);
            }
            cout << MAX <<endl;
        }
    }
    return 0;
}