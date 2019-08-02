#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin >> n){

     vector<int> v(n);
  int x;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    //v.push_back(x);
  }
  cout << *max_element(v.begin(), v.end()) << " "<<*min_element(v.begin(), v.end())<<endl;
  }

 return 0;
}
