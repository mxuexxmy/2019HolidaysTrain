//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s[110];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
       cin >> s[i];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j <n - i - 1 ; ++j) {
            if(s[j] > s[j + 1]){
                s[j].swap(s[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
       cout << s[i] <<endl;
    }
    return 0;
}
