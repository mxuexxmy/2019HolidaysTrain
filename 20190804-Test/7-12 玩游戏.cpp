//
// Created by longxing on 19-8-4.
//
/*
 * 贪心问题
 */
#include <bits/stdc++.h>
using namespace std;
typedef  struct  node{
    int k, score;
    double f;
}N;
bool cmp(N a, N b){
    return a.f > b.f;
}
int main(){
    int m, s, t;
    cin >> m >> s >> t;
    N n[1010];
    int k = t - s, x, y, score, cnt = 0;
    for (int i = 0; i < m; ++i) {
        scanf("%d%d%d",&x, &y, &score);
     if(y - x <= k){
         n[cnt].k = y - x;
         n[cnt].score = score;
         n[cnt].f = (double)(score) / (double)(y-x);
         cnt++;
     }
    }
    sort(n, n + cnt, cmp);
//    for (int i = 0; i < cnt; ++i) {
//       cout << n[i].score <<" ";
//    }
    int sum =0;
    for (int i = 0 ; k >= 0,i < cnt ; i++) {
           if(k >= n[i].k){
               sum += n[i].score;
               k -= n[i].k;
           }
    }
    cout << sum <<endl;
    return 0;
}