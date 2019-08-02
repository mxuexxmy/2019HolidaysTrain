#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  char ch;
  cin >>ch >> n;
  getchar();
  char s[110][110];
  for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
         s[i][j] = getchar();
         if(s[i][j] != ' ')
            s[i][j] = ch;
       }
       getchar();
  }
  int flag = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++ ){
        if(s[i][j] != s[n - 1 -i][n - 1 -j]){
            flag = 0;
            break;
        }
    }
  }
  if(flag){
    cout <<"bu yong dao le"<<endl;
  }
  for(int i = n -1; i  >= 0; i--){
    for(int j = n - 1; j >= 0; j--){
            cout << s[i][j];
    }
    cout <<endl;
  }
  return 0;
}


