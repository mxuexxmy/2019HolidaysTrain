//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
vector<int> v[110];
int main(){
    int a[110], n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] *= 10;
        sum += a[i];
    }
    int lev = 1,cnt =0 ,fschool ,school, flag = 0;
    for (int j = 0; j < sum;  ) {
        sum = 0, lev = 0;
        for (int i = 0; i < n; ++i) {
            if(a[i]){
                cnt +=1;
                v[i].push_back(cnt);
                a[i]--;
                sum+=a[i];
                lev++;
                school = i;
            }
            fschool = i;
        }
        if(lev == 1) {
            flag = 1;
            break;
        }
    }
    if(a[school] || flag){
        n ==1 || fschool != school ? cnt: cnt++;
        v[school][v[school].size()-1] = cnt;
        flag = 0;

    }
    while(a[school]){
        cnt +=2;
        v[school].push_back(cnt);
        a[school]--;
    }
    for (int i = 1; i <= n; ++i) {
      printf("#%d\n",i);
        for (int j = 0; j < v[i].size(); ++j) {
            printf("%d%c", v[i][j], (j + 1) % 10 == 0 ? '\n':' ');
        }
    }
    return 0;
}