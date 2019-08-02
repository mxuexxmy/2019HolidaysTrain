//
// Created by longxing on 19-8-2.
//
#include <bits/stdc++.h>
using namespace std;
int a[1100];
vector<int> V[1100];
int main(){
    int n;
    while(cin >> n){
        memset(a, 0, sizeof(a));
        memset(V, 0, sizeof(V));
        int sum =0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a[i] = x * 10;
            sum += a[i];
        }
        int flag = 0, school,fschool; //标记是否是最后一个学校
        int cnt = 0,lev =0;
        for (int j = 0; j < sum;  ) {
            sum = 0, lev = 0;
            for (int i = 0; i < n; ++i) {
                if(a[i]){
                    cnt +=1;
                    V[i].push_back(cnt);
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
            V[school][V[school].size()-1] = cnt;
            flag = 0;

        }
        while(a[school]){
            cnt +=2;
            V[school].push_back(cnt);
            a[school]--;
        }

        for (int i = 0; i < n; ++i) {
            printf("#%d\n",i+1);
            for (int j = 0; j < V[i].size(); ++j) {
                printf("%d%c",V[i][j], ((j+1) % 10  == 0) ? '\n': ' ');
            }
        }
    }
    return 0;
}