//
// Created by longxing on 19-8-4.
//

#include <bits/stdc++.h>
using namespace std;
/*
 * 判别是不是与７相关的数
 */
int f(int n){
    if( n % 7 == 0 ) return 0;
    while(n){
        if(n % 10 == 7) return 0;
        n /= 10;
    }
    return  1;
}
long long  a[1000010];
int main(){
     int n;
  // cout << f(171111) <<endl;
    for (int i = 1; i <= 1000005 ; i++) {
            if(f(i)){
                a[i] = a[i - 1]+ i*i;
            }else {
                a[i]  = a[i  -1];
            }
    }
   cin >> n;
       while(n--){
           int k;
           cin >> k;
           if(k >= 0){
               cout << a[k] <<endl;
           }else{
               cout << 0 <<endl;
           }
   }
    return 0;
}