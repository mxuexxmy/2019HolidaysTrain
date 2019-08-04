//
// Created by longxing on 19-8-4.
//

#include <bits/stdc++.h>
using namespace std;
int a[100050];
int main(){
    int n,m;
    while (cin >> n >> m , n, m){
      memset(a, 0, sizeof(a));
        for (int i = 0; i < n; ++i) {
           scanf("%d", &a[i]);
        }
        /*
         * 二分进行查找，假设答案存在
         */
        int l = 0, r = 1e6, mid= 0, ans;
        while (l <= r){
            mid = (l + r)/ 2;
            int cnt = 0,now = 0;
            for (int i = 0; i < l; ++i) {
                   if()
            }

        }
        cout << mid <<endl;
    }
    return 0;
}