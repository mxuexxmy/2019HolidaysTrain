//
// Created by longxing on 19-8-4.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n, m, a[100010] ={0}, b[100010] ={0};
int main(){
    int t;
    cin >> t;
    while (t--){
        memset(a, 0, sizeof(a));
        memset(b ,0 ,sizeof(b));
        scanf("%d%d",&n, &m);
        /*
         * 前缀和
         */
        for (int i = 1; i <= n; ++i) {
            int x;
             scanf("%d",&x);
            a[i] = a[ i- 1]+ x;
        }
        long long ans = 0;
        for (int i = 1; i <= m; ++i) {
            int l , r;
            scanf("%d%d", &l, &r);
            if(l > r){
              b[i] = a[l] - a[r- 1];
            }else {
              b[i] = a[r] - a[l- 1];
            }
        }
        sort( b + 1, b + m + 1);
        for (int i = 1; i <= m; ++i) {
            ans += b[i]*i;
        }
       // cout << ans <<endl;
        printf("%lld\n",ans);
    }
    return 0;
}