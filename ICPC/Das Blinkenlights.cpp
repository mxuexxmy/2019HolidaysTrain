#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b){
    return a/gcd(a,b)*b;
}
int main(){
   int p, q, s ;
   while(cin >> p >> q >> s){
        //scout << lcm(p,q) <<endl;
     if(lcm(p,q) < s){
        printf("yes\n");
     }else {
       printf("no\n");
     }
   }
   return 0;
}
