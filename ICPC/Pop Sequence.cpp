#include <bits/stdc++.h>
using namespace std;
int main(){
   int n, m, k;
   cin >> n >> m >> k;
    while(k--){
      vector<int> v(m);
       for(int i = 0; i < m; i++){
          cin >> v[i];
   }
   stack<int> s;
   int arr = 0 , flag = 1;
   for(int i = 1; i <= m; i++){
      s.push(i);
      if(s.size() > n){
        flag =0;
        break;
      }
      while(!s.empty() && s.top() == v[arr]){
         s.pop();
         arr++;
      }
   }
   if(!s.empty()) flag = 0;
   if(flag) printf("YES\n");
    else printf("NO\n");
   }

  return 0;
}
