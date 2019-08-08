//
// Created by longxing on 19-8-7.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    float  cnt = 0, sum  =0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if(x >=0 ){
            cnt++;
            sum += x;
        }
    }
    //cout << sum / cnt <<endl;
    printf("%.10f\n", sum / cnt);
    return 0;
}
