//
// Created by longxing on 19-7-20.
//
#include <bits/stdc++.h>
using  namespace std;
int main(){
    string s;
    cin >> s;
    int a[10] ={0};
    for (int i = 0; i < s.length(); ++i) {
        a[s[i] - '0']++;
    }
    for (int j = 0; j < 10; ++j) {
        if(a[j] != 0)
            cout << j << ":" <<a[j] <<endl;
    }
    return 0;
}