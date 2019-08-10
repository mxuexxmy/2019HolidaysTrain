//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
    ios::sync_with_stdio(false);
    int n ;
    cin >> n;
    int s = 0, e = n - 1,ThisMax = 0, AnsMax = -1, cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ThisMax += a[i];
        if(ThisMax > AnsMax){
            AnsMax = ThisMax;
            s = cnt;
            e = i;
        } else if(ThisMax < 0){
            ThisMax = 0;
            cnt = i + 1;
        }
    }
    if(AnsMax < 0)
        AnsMax = 0;

    printf("%d %d %d\n", AnsMax, a[s] , a[e]);

    return 0;
}
