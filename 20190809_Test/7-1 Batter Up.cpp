//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    float  sum = 0, cnt =0;
    for (int i = 0; i < n; ++i) {
       cin >> x;
        if(x >= 0){
            sum += x;
            cnt++;
        }
    }
    printf("%.6f\n",sum / cnt);
    return 0;
}
