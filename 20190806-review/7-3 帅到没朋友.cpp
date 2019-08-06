//
// Created by longxing on 19-8-6.
//
#include <bits/stdc++.h>
using  namespace std;
int  a[100050];
int main(){
    ios::sync_with_stdio(false);
    int t,m,flag = 1, x;
    cin >> t;
    memset(a, 0, sizeof(0));
    while (t--){
        int k;
        cin >> k;
        if(k > 1){
            for (int i = 0; i < k; ++i) {
                cin >> x;
                a[x]++;
            }
        } else{
            cin >> x;
        }
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        if(a[x] == 0){
            if(flag){
                printf("%05d",x);
            } else{
                printf(" %05d", x);
            }
            flag = 0;
            a[x] = 1;
        }
    }
    if(flag) printf("No one is handsome\n");
    return 0;
}
