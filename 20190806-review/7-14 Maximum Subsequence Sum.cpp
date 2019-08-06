//
// Created by longxing on 19-8-6.
//

#include <bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
    ios::sync_with_stdio(false);
    int n,ThiMax = 0, AnsMax = -1,s, e, cnt = 0;
    cin >> n;
    s = 0;
    e = n-  1;
    for (int i = 0; i < n; ++i) {
         cin >> a[i];
        ThiMax += a[i];
        if(ThiMax < 0){
             ThiMax = 0;
             cnt  = i + 1;
        } else if(ThiMax > AnsMax){
            AnsMax = ThiMax;
            e = i;
            s  =cnt;
        }
    }
    if(AnsMax < 0)  AnsMax = 0;
   printf("%d %d %d\n", AnsMax, a[s], a[e]);
    return 0;
}