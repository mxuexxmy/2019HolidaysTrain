#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   int cnt = 0;
   int a[n],x;
   stack<int> s;
   string str;
   while(cnt < n){
       cin >> str;
       if(str == "Push"){
         cin >> x;
         s.push(x);
       }else if(str == "Pop"){
          a[cnt] =s.top();
          s.pop();
          cnt++;
       }
   }
   for(int i = 0; i < n; i++){
     if(i)
        cout<<" "<<a[i];
     else
        cout<<a[i];
   }
   return 0;
}
