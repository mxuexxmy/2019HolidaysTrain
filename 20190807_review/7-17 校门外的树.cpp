//
// Created by longxing on 19-8-7.
//
#include <bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
    ios::sync_with_stdio(false);
    memset(a, 1, sizeof(a));
    int n,m, l ,r;
    cin >> n >> m;
    while (m--){
       cin >> l >> r;
        int x = l, y = r;
        for (int i = x; i <= y; ++i) {
             a[i] = 0;
          //  cout << "1" <<endl;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
         if(a[i]) cnt++;
    }
    cout << cnt <<endl;
    return 0;
}