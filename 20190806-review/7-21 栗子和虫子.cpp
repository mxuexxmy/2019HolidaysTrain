//
// Created by longxing on 19-8-6.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    float  x = a, y = b;
    int k = b / a;
    if(y / x > b / a) k++;
    if(n - k < 0) cout << 0 <<endl;
    else cout<< n - k <<endl;
    return 0;
}
