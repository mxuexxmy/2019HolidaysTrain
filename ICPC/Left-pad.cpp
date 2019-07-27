//
// Created by longxing on 19-7-17.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
     string s;
     int n;
     char ch;
    cin >> n >> ch;
    getchar();
    getline(cin, s);
  //  cout << s <<endl;
    if(s.length() < n ){
        for (int i = n  - s.length(); i > 0 ; i--) {
            cout << ch;
        }
        for (int j = 0; j <s.length() ; ++j) {
            cout << s[j];
        }
        cout <<endl;
    }else {
        for(int i = s.length() - n; i < s.length(); i++){
            cout<<s[i];
        }
        cout <<endl;
    }
    return  0;
}