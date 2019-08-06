//
// Created by longxing on 19-8-6.
//
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll  a[1000100], b[1000100];
int main(){
    ios::sync_with_stdio(false);
    ll t, t1, n, m, l,r;
    cin >> t;
    while (t--){
       cin >> n >> m;
        a[0] = 0;
        b[0] = 0;
        for (int i = 1; i <= n; ++i) {
           //scanf("%d", &a[i]);
            cin >> a[i];
            a[i] = a[i - 1] +a[i];
        }
        for (int i = 1; i <= m; ++i) {
              cin >> l >> r;
            if(l > r) swap(l, r);
            b[i] =  a[r] - a[l - 1];
        }
        sort(b + 1, b + m + 1);
         ll ans = 0;
        for (ll i = 1; i <= m; ++i) {
                ans += b[i] * i;
        }
       cout << ans <<endl;
    }
    return 0;
}
