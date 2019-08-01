//
// Created by longxing on 19-8-1.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k = n&1;
    cout << "与:" << k <<endl;
    int k1 = n | 1;
    cout << "或:" << k1 <<endl;
    int k2= !n;
    cout << "非:" << k2 <<endl;
    int k3 = n >> 1;
    cout << "右移:" << k3 <<endl;
    int k4 = n << 1;
    cout << "左移:" << k4 <<endl;
    int k5=n >>= 1;
    cout << "右移:" << k5 <<endl;

    return 0;
}