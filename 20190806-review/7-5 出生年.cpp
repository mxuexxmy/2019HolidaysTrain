//
// Created by longxing on 19-8-6.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int y, n;
    cin >> y >> n;
    int k = 0;
    for (int i = y; i <=3050 ; ++i) {
        int a[10] ={0};
        a[i % 10]++;
        a[i / 10 % 10]++;
        a[i / 100 % 10]++;
        a[i / 1000 % 10]++;
        int cnt = 0;
        for (int i = 0; i < 10; ++i) {
            if(a[i]) cnt++;
        }
        if(cnt == n) break;
        k++;
    }
    printf("%d %04d\n", k, y + k);
    return 0;
}
