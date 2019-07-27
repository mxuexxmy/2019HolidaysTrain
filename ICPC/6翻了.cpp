//
// Created by longxing on 19-7-19.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int cnt = 0;
    //cout << s <<endl;
    for(int i = 0; i <= s.length(); i++){

       // cout << cnt <<endl;
       if(s[i] == '6'){
            cnt++;
        }else if(cnt == 0){
            cout <<s[i];
        }else if(cnt <= 3 && cnt > 0){
            for (int j = 0; j < cnt; ++j) {
                cout << "6";
            }
           cout <<s[i];
            cnt = 0;
        }else if(cnt > 3 && cnt <= 9) {
              cout << "9";
           cout <<s[i];
              cnt = 0;
        } else{
            cout << "27";
           if(i < s.length())
           cout << s[i];
            cnt = 0;
        }

        //cout << cnt <<endl;
    }
    return  0;
}