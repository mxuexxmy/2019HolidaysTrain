//
// Created by longxing on 19-7-31.
//
#include <bits/stdc++.h>
using namespace std;

int  main(){
    int n, m;
    int a[2000] ={0}, b[2000] ={0}, c[2500] ={0}, d[2000]={0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x, z;
        scanf("%d%d",&x, &z);
        a[z] = x;
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int x, z;
        scanf("%d%d",&x, &z);
        b[z] = x;
    }
    /*
     * 乘法
     */
    for (int i = 0; i <= 1000; ++i) {
        for (int j = 0; j <= 1000; ++j) {
              if(a[i]){
                  if(b[j]){
                      c[i + j] += a[i] * b[j];
                  }
              }
        }
    }
   /*
    * 加法
    */
    for (int i = 0; i <= 1000; ++i) {
          if(a[i]  || b[i]){
              d[i] += a[i] + b[i];
          }
    }
    /*
     * 输出乘法
     */
    int flag = 0; //标记空格，也为后面判别零多项式用
    for (int i = 2000; i >= 0; i--) {
          if(c[i]){
              if(flag) printf(" %d %d", c[i], i);
              else printf("%d %d", c[i], i);
              flag = 1;
          }
    }
    if(flag)  printf("\n");
    else printf("0 0\n");
    /*
     * 输出加法
     */
    flag = 0;
    for (int i = 1000; i >= 0 ; i--) {
        if(d[i]){
            if(flag) printf(" %d %d", d[i], i);
            else printf("%d %d", d[i], i);
            flag = 1;
        }
    }
    if(flag)  printf("\n");
    else printf("0 0\n");
    return 0;
}
