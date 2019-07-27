//
// Created by longxing on 19-7-20.
//
#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
using namespace std;
int a[10010];
int main(){
    memset(a, 0 ,sizeof(a));
     int n;
    scanf("%d",&n);
    while(n--){
        int k,x;
      scanf("%d", &k);
        if(k > 1){
            for (int i = 0; i < k; ++i) {
                 scanf("%d",&x);
                  a[x]++;
            }
        }
    }

    int k1;
    cin >> k1;
    int x1 , flag = 1;
//    for (int l = 0; l < k1; ++l) {
//        scanf("%d", &x1);
//        cout << a[x1] <<endl;
//    }
    int cnt = 0;
    for (int j = 0; j < k1; ++j) {
        scanf("%d",&x1);
        if(a[x1] == 0){
            if(cnt == 0)
            printf("%d",x1);
            else
            printf(" %d",x1);
            cnt++;
            flag = 0;
        }
    }
    if(flag){
        cout <<"No one is handsome"<<endl;
    }
    return 0;
}
