//
// Created by longxing on 19-7-18.
//

#include <bits/stdc++.h>
using  namespace std;

typedef struct  hb{
    int id; //编号
    int cnt; //红包的个数
    float  money;
}HB;

bool cmp(HB a, HB b){
    if(a.money != b.money) return  a.money > b.money;
    if(a.cnt != b.cnt) return  a.cnt > b.cnt;
    return  a.id < b.id;
}
int main(){
    int n;
    cin >> n;
    HB hb[10010];
    for (int m = 1; m <= n; ++m) {
        hb[m].money = 0;
        hb[m].id = m;
    }
    for (int l = 1; l <= n; ++l) {
       int k,id;
        cin >> k;
        float  money;
        for (int i = 0; i < k; ++i) {
            cin >> id >> money;
            hb[id].money += money;
            hb[l].money -= money;
            hb[id].cnt++;
        }

    }

    sort(hb + 1, hb + n + 1, cmp);
    for (int j = 1; j <= n ; ++j) {
        //cout << hb[j].id << " "<<hb[j].money / 100<<endl;
        printf("%d %.2f\n", hb[j].id,hb[j].money / 100);
    }

    return  0;
}