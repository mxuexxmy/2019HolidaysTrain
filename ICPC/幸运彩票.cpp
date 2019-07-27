//
// Created by longxing on 19-7-18.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int qsum = 0, hsum = 0;
        for (int i = 0; i <3 ; ++i) {
            qsum += s[i];
        }
        for (int j = 3; j < 6; ++j) {
            hsum += s[j];
        }
        if(qsum == hsum){
            cout << "You are lucky!" <<endl;
        } else{
            cout << "Wish you good luck."<<endl;
        }
    }
    return 0;
}