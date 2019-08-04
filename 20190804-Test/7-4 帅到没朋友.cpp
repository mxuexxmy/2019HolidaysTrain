//
// Created by longxing on 19-8-4.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    int a[100010] = {0};
    while (t--){
        int k,  x;
        scanf("%d",&k);
        if(k > 1){
            for (int i = 0; i < k; ++i) {
                scanf("%d", &x);
                a[x] =  1;
            }
        }else {
            scanf("%d",&x);
        }
    }
    int k, cnt = 0;
    scanf("%d", &k);
    for (int i = 0; i < k; ++i) {
        int x;
         scanf("%d",&x);
        if(a[x] == 0){
            if(cnt !=0 ){
                printf(" ");
            }
            printf("%05d",x);
            a[x] = 1;
            cnt++;
        }
    }
    if(!cnt) printf("No one is handsome\n");
    return 0;
}