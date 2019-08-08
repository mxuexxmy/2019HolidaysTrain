//
// Created by longxing on 19-8-7.
//
#include <bits/stdc++.h>
using namespace std;
set<int> s[55];
void same(int x, int y){
      set<int>::iterator it;
      float  sum = 0 , cnt = 0;
    for (it = s[x].begin(); it != s[x].end() ; *it++) {
          if(s[y].count(*it)) cnt++;
    }
    sum  =s[x].size() + s[y].size() -cnt;
    printf("%.2f\%%\n", cnt / sum * 100);
}
int main(){
    ios::sync_with_stdio(false);
    int t, t1, l, r;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int k,x;
        cin >> k;
        for (int j = 0; j < k; ++j) {
           cin >> x;
            s[i].insert(x);
        }
    }
   cin >> t1;
   while(t1--){
      cin >> l >> r;
       same(l, r);
   }
    return 0;
}
