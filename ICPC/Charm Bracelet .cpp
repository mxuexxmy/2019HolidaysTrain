//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int w[35000], dp[35000],d[35000];
int main(){
    int n, m;
    while (scanf("%d%d",&n, &m)!= EOF){
        memset(dp, 0 ,sizeof(dp));
        for (int i = 1; i <= n; i++) {
            scanf("%d%d",&w[i],&d[i]);
        }
        for (int i = 1; i <= n; i++) {
            for (int j = m; j >= w[i] ; j--) {
                dp[j] = max(dp[j], dp[j -w[i]] + d[i]);
            }
        }
        printf("%d\n",dp[m]);
    }
    return 0;
}