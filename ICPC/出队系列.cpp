//
// Created by longxing on 19-7-29.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int  n, m, k;
    cin >> n >> m >> k;
    while (k--){
        int a[1010];
        for (int i = 0; i < m; ++i) {
             cin >> a[i];
        }
        stack<int > s;
        int arr = 0, flag = 1;
        for (int i = 1; i <= m; ++i) {
              s.push(i);
             if(s.size() > n){
                 flag = 0;
                 break;
             }
            while(!s.empty() && s.top() == a[arr]){
                s.pop();
                arr++;
            }
        }
        if(!s.empty()) flag = 0;
        if(flag) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}