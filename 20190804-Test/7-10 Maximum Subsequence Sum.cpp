//
// Created by longxing on 19-8-4.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10100]={0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int ThisMax = 0,NowMax = -1, s = 0, e = n-1 , cnt = 0;
    /*
     * 在线处理
     */
    for (int i = 0; i < n; ++i) {
          ThisMax += a[i];
        if(ThisMax < 0){
            ThisMax = 0;
            cnt = i+1;
        }else if(ThisMax > NowMax){
            NowMax = ThisMax;
            s = cnt;
            e = i;
        }
    }
     if(NowMax < 0)
        NowMax = 0;
        printf("%d %d %d\n", NowMax,  a[s], a[e]);

    return 0;
}