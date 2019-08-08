//
// Created by longxing on 19-8-7.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a[1010];
    a[0] = 1;
    a[1] = 1;
    a[2] = 1;
    a[3] = 2;
    for (int i = 4; i <=1000 ; ++i) {
        a[i] = (a[i -1] + a[i - 2] ) % 20190113;
    }
    int n, t;
    cin >> t;
    while (t--){
        cin >> n;
        cout << a[n] <<endl;
    }

    return 0;
}