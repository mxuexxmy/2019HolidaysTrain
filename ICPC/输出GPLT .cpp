//
// Created by longxing on 19-7-19.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int a[5] = {0};
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'G' || s[i] =='g' )  a[1]++;
        if(s[i] == 'P' || s[i] == 'p') a[2]++;
        if(s[i] == 'L' || s[i] =='l' )  a[3]++;
        if(s[i] == 'T' || s[i] == 't') a[4]++;
    }
   // cout << a[1] << " " <<a[2] << " "<<a[3] <<" "<<a[4]<<endl;
    for (int j = 0; a[1] > 0 || a[2] > 0 || a[3] > 0 || a[4] > 0; ++j) {
        if(a[1]){
            cout << "G";
            a[1]--;
        }
        if(a[2]){
            cout <<"P";
            a[2]--;
        }
        if(a[3]){
            cout << "L";
            a[3]--;
        }

        if(a[4]){
            cout << "T";
            a[4]--;
        }

    }
    return 0;
}