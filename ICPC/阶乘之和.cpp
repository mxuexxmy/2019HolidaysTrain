//
// Created by longxing on 19-7-29.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long ans = 0, sum = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum *= i;
        ans += sum;

    }
    cout << ans <<endl;
    return 0;
}