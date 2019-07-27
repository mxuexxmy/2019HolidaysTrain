//
// Created by longxing on 19-7-18.
//

#include <bits/stdc++.h>
using  namespace std;
int main(){
   string s[110];
    int cnt = 0;
    for (int i = 1;  ; ++i) {
        cin >> s[i];
        if(s[i] == "."){
            break;
        }
        cnt++;
    }
    if(cnt < 2){
       cout <<"Momo... No one is for you ..."<<endl;
    } else if(cnt >= 2 && cnt < 14){
       cout << s[2]<<" is the only one for you..." <<endl;
    } else{
       cout << s[2] <<" and "<< s[14]<<" are inviting you to dinner..." <<endl;
    }
    return  0;
}