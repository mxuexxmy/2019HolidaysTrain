//
// Created by longxing on 19-7-29.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using  namespace std;

const  int Inf = 0x3f3f3f3f;
const int  Max = 1000010;
struct  node{
    int v,c;
    bool  operator <(const node & a) const {
        return c > a.c;
    }
};
struct  Edge{
    int v, c;
};
vector<Edge> E[Max];
bool vis[Max];
int d[Max];
void addEdge(int u,int v,int w){
    E[u].push_back(Edge{v,w});

}
void dijkstra(int n, int s){
    memset(vis, false,sizeof(vis));
    for (int i = 0; i <= n ; ++i) {
        d[i] = Inf;
    }
    priority_queue<node> q;
    d[s] = 0;
    q.push(node{s, 0});
    node t;
    while (q.size()){
        t = q.top();
        q.pop();
        int u = t.v;
        if(vis[u]) continue;
        vis[u] = true;
        for (int i = 0; i < E[i].size(); ++i) {
            int v = E[u][i].v;
            int cost = E[u][i].c;
            if(!vis[v] && d[v] > d[u] + cost){
                d[v] = d[u] + cost;
                q.push(node{v, d[v]});
            }

        }
      }

}
int main(){

    /*
     * 清空数组
     */
//    for (int i = 0; i < Max; ++i) {
//        if(E[i].size()){
//            E[i].clear();
//        }
//    }
    int n, e, u, v, w;
    cin >> e >> n;
    for (int i = 0; i < e; ++i) {
        cin >> u >> v >> w;
        addEdge(u, v, w);
        addEdge(v, u, w);
    }
    dijkstra(n,1);
    cout << d[n] <<endl;
    return 0;
}