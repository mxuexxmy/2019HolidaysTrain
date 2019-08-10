//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
set<int> s[55];
void same(int x, int y){
    float  cnt = 0, sum =0;
    for (auto p : s[x]) {
          if(s[y].count(p)) cnt++;
    }
    sum = s[x].size() + s[y].size() - cnt;
    printf("%.2f\%%\n", cnt / sum * 100);
}
int main(){
    ios::sync_with_stdio(false);
   int n, m, x, y;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int k, x;
        cin >> k;
        for (int j = 0; j < k; ++j) {
           cin >> x;
            s[i].insert(x);
        }
    }
    cin >> m;
    while (m--){
        cin >> x >> y;
        same(x, y);
    }
    return 0;
}
