//
// Created by longxing on 19-7-17.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    int cnt = 0;
    while(cin >> s && s != "End"){
     // if(s == "End") break;
       cnt++;
       if(cnt == n + 1){
           cout << s <<endl;
           cnt = 0;

       } else {

           if(s == "ChuiZi") cout << "Bu" <<endl;
           if(s == "Bu") cout << "JianDao" <<endl;
           if(s == "JianDao") cout << "ChuiZi" <<endl;
       }
    }
    return  0;
}