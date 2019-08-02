#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[1010];
  int t;
  cin >> t;
  while(t--){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int qu;
  cin >>qu;
  while(qu--){
  int l, r;
  cin >> l >> r;
  if(l == r){
    cout << a[l -1] <<endl;
  }else{
    if(l > r)
    swap(l,r);
    vector<int> b(a+l, a + r);
    cout << *max_element( b.begin() , b.end()) <<endl;
    vector <int>().swap(b);
    }
   }
  }
  return 0;
}
