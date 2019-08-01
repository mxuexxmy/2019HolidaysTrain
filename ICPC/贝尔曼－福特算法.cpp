//
// Created by longxing on 19-7-30.
//

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
struct  edge{
    int to, c;
};
const  int maxn = 1010, Inf = 0x3f3f3f3f;
vector <edge> E[maxn];
int t, n, d[maxn];
int Bellman_ford(int s){
     bool  flag;
    for (int i = 1; i <= n; ++i) {
        d[i] = (i == s ? 0 : Inf);
    }
    for (int k = 1; k < n ; ++k) {
        flag = false;
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < E[i].size() ; ++j) {
                edge e = E[i][j];
                if(d[e.to] > d[i] + e.c){
                    d[e.to] = d[i] + e.c;
                    flag = true;
                }
            }
            if(flag == false) break;
        }
    }
    return d[n];
}
int main(){
    cin >> t >> n;
    int u, v, w;
    for (int i = 0; i < t; ++i) {
         cin >> u >> v >> w;
        E[u].push_back(edge{v,w});
        E[v].push_back(edge{u,w});
    }
   cout << Bellman_ford(1)<<endl;
    return 0;
}