//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
typedef struct  node{
    int x, y;
}AREA;
int main(){
   int t;
    cin >> t;
    while (t--){
        AREA area[110];
        int n, x, y;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x >> y;
            area[i].x = x;
            area[i].y = y;
        }
        float ans = 0;
        /*
         * 为什么用double 计算得０，而float 却能计算对
         */
        for (int i = 1; i <= n; ++i) {
             ans += (area[i].x - area[i -1].x)* (area[i].y + area[i - 1].y) / 2.0;
        }
        printf("%.6f\n",ans);
    }

    return 0;
}
