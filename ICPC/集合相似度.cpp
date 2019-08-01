//
// Created by longxing on 19-7-20.
//

#include <bits/stdc++.h>
using namespace std;
set<int> U[55];
void Same(int a, int b){
    int same = 0, sum =0;
//    set::iterator it;
    set<int>::iterator it;
    for (it = U[a].begin(); it != U[a].end() ; *it++) {
        //if(U[b].find(*it) != U[b].end()) same++;
        if(U[b].count(*it)) same++;
    }
    sum = U[a].size() + U[b].size();
    sum -= same;
   // cout << same *1.00 / sum* 100 << "%" <<endl;
    printf("%.2f\%\n",same *1.00 / sum* 100);
}
int main(){
    int a, b, n;
    cin >> n;
    for (int i = 1; i <= n ; ++i) {
        int  k;
        cin >> k;
        for (int j = 0; j < k; ++j) {
            int x;
            scanf("%d", &x);
            U[i].insert(x);
        }
    }
    int k;
    cin >> k;
    while(k--){
        cin >> a >> b;
        Same(a, b);
    }
    return 0;
}
