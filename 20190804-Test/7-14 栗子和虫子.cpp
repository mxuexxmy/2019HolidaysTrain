//
// Created by longxing on 19-8-4.
//
#include <bits/stdc++.h>
using  namespace std;
int main(){
    int n,a , b;
   while( cin >> n >> a >> b){
       float x =a, y = b;
       int k =  (y / x) > (b /a) ? b /  a + 1:b /a;
      printf("%d\n", n- k >= 0? n - k : 0);
   }
    return 0;
}