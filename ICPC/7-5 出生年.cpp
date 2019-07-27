//
// Created by longxing on 19-7-20.
//

#include <bits/stdc++.h>
using  namespace std;
int main(){
    int y, n;
   while(cin >> y >> n){
       for (int i = y; i <=3000; ++i) {
           int a[10] ={0};
           a[i % 10]++;
           a[i / 10 % 10]++;
           a[i / 100 % 10]++;
           a[i / 1000 % 10]++;
           int cnt = 0;
           for (int j = 0; j < 10; ++j) {
               if(a[j] != 0)
                   cnt++;
           }
           if(cnt >= n){
               printf("%d %04d\n", i - y, i);
               break;
           }
       }
   }

    return 0;
}