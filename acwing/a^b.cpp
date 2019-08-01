//
// Created by longxing on 19-7-30.
//

#include <bits/stdc++.h>
using namespace std;
long long Pow(long long a,long long b,long long p){
    long long ans = 1 % p;
    while(b){
      if(b & 1){
          ans = ans * a % p;
      }
        a = a * a % p;
        b >>= 1;

    }
    return ans%p;
}
int main(){
    long long n, m, p;
    cin >> n >> m >> p;
    n %= p;
    cout << Pow(n, m, p) <<endl;
    return 0;
}