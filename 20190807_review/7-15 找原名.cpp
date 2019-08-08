//
// Created by longxing on 19-8-7.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    map<string,string> ma;
    int n, m;
    string s,s1, s2;
    cin >> n;
    for (int i = 0; i < n; ++i) {
         cin >> s >> s1;
         ma[s] = s1;
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
       cin >> s2;
        cout << ma[s2] <<endl;
    }

    return 0;
}
