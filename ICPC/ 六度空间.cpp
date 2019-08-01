//
// Created by longxing on 19-7-31.
//

#include <bits/stdc++.h>
using namespace std;
int n, e;
int G[10000][1000];
int vis[10000];

int bfs(int  v){
    vis[v] = 1;
    int cnt = 1, level = 0, last = v, tail;
    queue<int> q;
    q.push(v);
    while (!q.empty()){
        int  de = q.front();
        q.pop();
        for (int i = 1; i <= n ; ++i) {
            if(G[de][i] == 1 && !vis[i]){
                vis[i] = 1;
                q.push(i);
                cnt++;
                tail = i;
            }
        }
        if(de == last) {
            level++;
            last =tail;
        }
        if(level == 6) break;
    }
    return  cnt;

}

int main(){
     int v1, v2;
      cin >> n >> e;
    memset(G, 0, sizeof(G));
    for (int i = 0; i < e; ++i) {
         scanf("%d%d", &v1,&v2);
        G[v1][v2] = 1;
    G[v2][v1] = 1;
}

    for (int i = 1; i <= n ; ++i) {
        memset(vis, 0, sizeof(vis));
        double  cnt =bfs(i);
        printf("%d: %.2lf\%\n",i, cnt / n *100.0);
    }

    return 0;
}