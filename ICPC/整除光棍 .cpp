//
// Created by longxing on 19-7-20.
//
/*
 * 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long ans = 1;
    int cnt = 1;
    while(ans % n != 0){
        ans = ans* 10 + 1;
        cnt++;
        //cout << ans <<endl;
    }
    cout << ans / n << " " <<cnt <<endl;
    return 0;
}