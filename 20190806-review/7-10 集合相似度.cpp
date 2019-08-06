//
// Created by longxing on 19-8-6.
//

#include <bits/stdc++.h>
using namespace std;
set<int> s[55];
void same(int l, int r){
    set<int>::iterator it;
    float  cnt = 0, sum = 0;
    for (it = s[l].begin(); it != s[l].end(); *it++) {
         if(s[r].count(*it)) cnt++;
    }
    sum = s[l].size() + s[r].size() - cnt;
    printf("%.2f\%%\n",cnt / sum * 100);
}
int main(){
    ios::sync_with_stdio(false);
    int n,m,  k, x, l, r;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
          cin >> k;
        for (int j = 0; j < k; ++j) {
            cin >> x;
          s[i].insert(x);
        }
    }
   cin >> k;
    while(k--){
        cin >> l >> r;
        same(l, r);
    }
    return 0;
}