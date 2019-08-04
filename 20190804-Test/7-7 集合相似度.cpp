//
// Created by longxing on 19-8-4.
//

#include <bits/stdc++.h>
using namespace std;
set<int> s[55];
void Same(int x, int y){
    float sum = 0, cnt = 0;
    set<int>::iterator it;
    /*
     * 查找相同元素个数
     */
    for (it = s[x].begin(); it != s[x].end(); *it++) {
           if(s[y].count(*it)) cnt++;
    }
    sum = s[x].size() + s[y].size() - cnt;
    printf("%.2f\%%\n",cnt / sum * 100);
}
int main(){
    int t;
    memset(s, 0, sizeof(0));
    scanf("%d",&t);
    for (int i = 1; i <= t ; ++i) {
          int k, x;
         scanf("%d", &k);
        for (int j = 0; j < k; ++j) {
            scanf("%d", &x);
            s[i].insert(x);
        }
    }
    int n, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
         scanf("%d%d",&x,&y);
          Same(x,y);
    }
    return 0;
}