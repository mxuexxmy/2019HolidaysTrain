//
// Created by longxing on 19-8-8.
//
#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int rank;
    int id;
    int a[6] ={-1};
    int total;
    int cnt;
}STU;
bool cmp(STU a, STU b){
    if(a.total != b.total) return a.total > b.total;
    if(a.cnt != b.cnt) return a.cnt > b.cnt;
    return a.id < b.id;
}
int main(){
    ios::sync_with_stdio(false);
    STU stu[10010];
    int n, k, m, id ,pid, score, a[6];
    cin >> n >> k >> m;
    for (int i = 1; i <= m; ++i) {
       cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> id >> pid >> score;
        if(score >= stu[id].a[pid]){
            stu[id].id = id;
            stu[id].a[pid] = score;
            stu[id].total += score;
            stu[id].cnt++;
        }
    }
   sort(stu + 1, stu + n + 1, cmp);
    for (int i = 0; i <= n; ++i) {
        if(stu[i].total != 0){
            cout << stu[i].id << " " << stu[i].total ;
            for (int j = 1; j <= k; ++j) {
                if(stu[i].a[j] != -1){
                    printf(" %d", stu[i].a[j]);
                } else{
                    printf(" -");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
