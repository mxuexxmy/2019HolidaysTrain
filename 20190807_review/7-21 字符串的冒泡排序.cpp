//
// Created by longxing on 19-8-7.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
   // string s[110];
    string ch,ch1;
    vector<string> s;
//    cin >> ch >> ch1;
//    cout << ch.compare(ch1) <<endl;
//    swap(ch, ch1);
//    cout << ch << " " <<ch1 <<endl;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> ch;
        s.push_back(ch);
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j <j -i -1 ; ++j) {
              if(s[j].compare(s[j +1]) > 0){
                  swap(s[j], s[j+1]);
                  //cout << s[j] << " " << s[j + 1] <<endl;
              }
        }
    }
    for (int i = 0; i < n; ++i) {
       cout << s[i] <<endl;
    }
    return 0;
}