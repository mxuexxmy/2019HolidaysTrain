//
// Created by longxing on 19-7-20.
//

#include <bits/stdc++.h>
using  namespace std;
int main(){
  char ch[110][110];
  int n;
  cin >> n;
    getchar();
  string s;
    getline(cin , s);
    int k =  s.length()/n;
    if(s.length() % n != 0)
        k++;
    int cnt = 0;
    for (int i = k -1 ; i >= 0; --i) {
        for (int j = 0; j < n; ++j) {
            if(cnt == s.length()){
                ch[j][i] = ' ';
            } else{
                ch[j][i] = s[cnt];
                cnt++;
            }
        }
    }

    for (int l = 0; l < n; ++l) {
        for (int i = 0; i < k; ++i) {
            cout<<ch[l][i];
        }
        cout<<endl;
    }

    return 0;
}