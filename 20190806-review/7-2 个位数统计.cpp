//
// Created by longxing on 19-8-6.
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
    for (int i = 0; i < 10; ++i) {
         if(a[i]){
             printf("%d:%d\n", i, a[i]);
         }
    }
    return 0;
}