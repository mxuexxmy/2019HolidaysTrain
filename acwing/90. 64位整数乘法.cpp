//
// Created by longxing on 19-7-30.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, p, ans = 0;
    cin >> n >> m >> p;
    while (m){
        if(m & 1){
            ans = (ans + n) % p;
        }
        m >>= 1;
        n = 2 *n % p;
    }
   cout << ans <<endl;
    return  0;
}
