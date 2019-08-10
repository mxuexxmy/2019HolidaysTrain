//
// Created by longxing on 19-8-8.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    vector<int> a[100010];
    int n, k, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        for (int j = 0; j < k; ++j) {
             cin >> x;
            a[i].push_back(x);
        }
    }
    for (int i = n -1 ; i >= 0 ;--i) {
         if(a[i].size()){
             cout << a[i][a[i].size() -1] <<endl;
             break;
         }
    }
    return 0;
}