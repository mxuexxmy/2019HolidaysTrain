//
// Created by longxing on 19-8-7.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n, a[10010];
    cin >> n;
    int s = 0, e =n- 1,ThisMax = 0, AnsMax  =-1, cnt = 0;
    for (int i = 0; i < n; ++i) {
         cin >> a[i];
        ThisMax += a[i];
        if(ThisMax > AnsMax){
            AnsMax = ThisMax;
            e = i;
            s= cnt + 1;
        } else if(ThisMax < 0){
            ThisMax = 0;
            cnt = i;
        }
    }
    if(AnsMax < 0) AnsMax = 0;
    cout << AnsMax << " " << a[s] << " "<< a[e] <<endl;
    return 0;
}
