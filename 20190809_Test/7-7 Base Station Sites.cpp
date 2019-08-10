//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
int a[1000050];
int main(){
    ios::sync_with_stdio(false);
    int n, m;
    while (cin >> n >> m, n, m){
       memset(a, 0, sizeof(a));
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans = 0, l = 0, r = 1e6, mid;
        while(l <= r){
            cout << l+ 1 <<endl;
             mid = (l + r) / 2;
            if(a[mid] < l)
                r = mid - 1;
            if(a[mid] > r)
                l =  mid + 1;
            if(a[mid] == mid)
                l = l + 1;
        }
       cout << l+ 1 <<endl;
    }
    return 0;
}
