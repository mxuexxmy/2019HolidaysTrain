//
// Created by longxing on 19-8-6.
//
#include <bits/stdc++.h>
using  namespace std;
vector<int > v[110];
int main(){
    memset(v, 0, sizeof(0));
    int a[110] ={0}, n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] *= 10;
    }
    int lev = 1, school, fschool, cnt = 0, flag =  0;
    while(lev){
        lev = 0;
        for (int i = 1; i <= n; ++i) {
            if(a[i]){
                cnt++;
               v[i].push_back(cnt);
                school = i;
                lev++;
                a[i]--;
            }
            fschool = i;
        }
        if(lev == 1){
            lev = 0;
            flag = 1;
        }
    }
    while(a[school] && flag){
        n ==1 || fschool != school ? cnt: cnt++;
        v[school][v[school].size()-1] = cnt;
        flag = 0;
    }
    while (a[school]){
        cnt += 2;
        v[school].push_back(cnt);
        a[school]--;
    }

    for (int i = 1; i <= n; ++i) {
        printf("#%d\n",i);
        for (int j = 0; j < v[i].size(); ++j) {
           printf("%d%c", v[i][j], (j + 1) % 10 == 0? '\n':' ');
        }
    }
    return 0;
}
