//
// Created by longxing on 19-7-30.
//
#include <bits/stdc++.h>
using namespace std;
const int  MAX = 2000050;
int a[MAX]={0}, b[MAX] ={0};
int main(){
    int n, m, l;
    cin >> n >> m >> l;
    int k = n, id = 0;
    while (k--){
       int x, y;
        scanf("%d%d",&x,&y);
        if(y > l) continue;
        a[id] = x- (l - y);
        b[id] = x + (l - y);
        id++;
    }
    sort(a, a + id);
    sort(b, b + id);
    while(m--){
        int x;
        scanf("%d",&x);
        int sum1 = upper_bound(a, a + id, x)  -a;
        int sum2 = lower_bound(b, b + id, x) - b;
        printf("%d\n", sum1 - sum2);
    }
    return  0;
}