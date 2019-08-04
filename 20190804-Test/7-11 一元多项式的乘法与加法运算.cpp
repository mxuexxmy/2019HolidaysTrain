//
// Created by longxing on 19-8-4.
//

#include <bits/stdc++.h>
using namespace std;
int a[2000], b[2000],c[2010],d[2000];
int main(){
     int n, m;
        memset(a,0, sizeof(a));
        memset(b,0, sizeof(b));
        memset(c,0, sizeof(c));
        memset(d,0, sizeof(d));
        int x, z;
       cin >> n;
        for (int i = 0; i < n; ++i) {
           scanf("%d%d",&x, &z);
            a[z] = x;
        }
       cin >> m;
        for (int i = 0; i < m; ++i) {
            scanf("%d%d",&x, &z);
            b[z] = x;
        }
        /*
         * 乘法
         */
        for (int i = 0; i <= 1010; i++) {
            for (int j = 0; j <= 1010; j++) {
                if(a[i]){
                    if(b[j]){
                        c[ i + j] += a[i] * b[j];
                    }
                }
            }
        }
         /*
          * 加法
          */
            for (int i = 0; i <= 1010; ++i) {
                if(a[i] !=0 || b[i] != 0){
                    d[i] += a[i]+b[i];
                }
            }
            /*
             * 输出乘法
             */
            int flag = 0;
            for (int i = 2000; i >= 0 ; i--) {
                 if(c[i] != 0){
                     if(flag == 0){
                         printf("%d %d", c[i], i);
                     }else {
                         printf(" %d %d",c[i],i);
                     }
                     flag =1;
                 }
            }
            if(flag) printf("\n");
            else printf("0 0\n");

            flag = 0;
            for (int i = 1010; i >= 0 ; i--) {
                if (d[i] != 0) {
                    if (flag == 0) {
                        printf("%d %d", d[i], i);
                    } else {
                        printf(" %d %d", d[i], i);
                    }
                    flag = 1;

                }
            }
            if(flag) printf("\n");
            else printf("0 0\n");

    return 0;
}