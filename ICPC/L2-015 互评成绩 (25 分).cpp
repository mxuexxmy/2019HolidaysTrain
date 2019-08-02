#include <bits/stdc++.h>
using namespace std;
int main(){
  long long x;
  int n;
  cin >> n;
  int cnt  = 1;
  while(n--){
   cin >> x;
   x = sqrt(x);
   if(x % 2 == 1){
    cout << "Case "<<cnt<<": "<< "odd"<<endl;
   }else {
    cout << "Case "<<cnt<<": "<< "even"<<endl;
   }
   cnt++;
  }

}
