#include <bits/stdc++.h>
using namespace std;
int main(){
   string s, s1;
   while(cin >> s >> s1){
       int cnt = 0,pr = 0;
    if(s == "E"){
        for(int i = 0; i <= s1.length();i++){
                 cnt++;
            if(s1[i]!=s1[i+1]){
            cout << s1[i]<<cnt;
            cnt = 0;
            }
        }
    }else{
        for(int i = 0; i < s1.length(); i++){
            if((s1[i]- '0' <= 9 && s1[i] - '0' >=0)){
                for(int j = 0; j < s1[i] - '0';j++){
                    cout<< s1[i-1];
                }
            }
        }
    }
    cout <<endl;
   }
   return 0;
}
