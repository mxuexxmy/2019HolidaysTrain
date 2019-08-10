//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
int a[2000], b[2000], c[2500], d[2000];
int main(){
   ios::sync_with_stdio(false);
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    memset(d, 0, sizeof(d));
    int n, m, x, z;
    cin >> n;
    for (int i = 0; i < n; ++i) {
         cin >> x >> z;
        a[z] = x;
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x >> z;
        b[z] = x;
    }
    for (int i = 0; i <= 1000; ++i) {
        for (int j = 0; j <= 1000; ++j) {
            if(a[i]){
                if(b[j]){
                   c[i + j] += a[i] * b[j];
                }
            } else{
                continue;
            }
        }
    }
    for (int i = 0; i <= 1000; ++i) {
         if(a[i] || b[i]){
             d[i] += a[i] + b[i];
         }
    }
    int flag = 1;
    for (int i = 2000; i >= 0; --i) {
       if(c[i]){
           if(flag){
               printf("%d %d", c[i], i);
           } else{
               printf(" %d %d", c[i], i);
           }
           flag = 0;
       }
    }
    if(!flag) printf("\n");
    else printf("0 0\n");
    flag = 1;
    for (int i = 1000; i >= 0; --i) {
        if(d[i]){
            if(flag){
                printf("%d %d", d[i], i);
            } else{
                printf(" %d %d", d[i], i);
            }
            flag = 0;
        }
    }
    if(!flag) printf("\n");
    else printf("0 0\n");

    return 0;
}
