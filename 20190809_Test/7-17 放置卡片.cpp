//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    float  n;
    while(cin >> n, n){
        int cnt = 0;
        float  sum =0;
        for (int i = 2; sum <= n ; ++i) {
             sum += 1.0 / i;
            cnt++;
        }
     cout << cnt << " card(s)"<<endl;
    }
    return 0;
}
