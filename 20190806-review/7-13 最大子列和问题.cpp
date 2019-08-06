//
// Created by longxing on 19-8-6.
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100010];
int main(){
    ios::sync_with_stdio(false);
    int n, x;
    ll ThisMax = 0, AnsMAx = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ThisMax += x;
        if(ThisMax > AnsMAx){
            AnsMAx = ThisMax;
        }
        if(ThisMax < 0)
            ThisMax = 0;
    }
    cout << AnsMAx <<endl;
    return 0;
}
