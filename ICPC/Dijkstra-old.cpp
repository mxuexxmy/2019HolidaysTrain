//
// Created by longxing on 19-7-27.
//
/*
 * https://blog.csdn.net/kprogram/article/details/81225176
 */
/*
 * 第一：选点　，d[]数组最小值，没有选过
 * 第二：更新
 *
 */
//#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using  namespace std;
int m[1100][1100], d[1010];
const  int Inf = 0x3f3f3f3f;
void  dijkstra(int n){
   int  minn, k, vis[1010]={0};
    for (int i = 1; i <= n; i++) {
       d[i] = m[1][i];
    }
    for (int i = 1; i < n; i++) {
//        dijkstra算法的重点
       minn = Inf;
       k = 0;
        for (int j = 2; j <= n ; j++) {
            if (minn > d[j] && vis[j] == 0) {
                minn = d[j];
                k = j;
            }
        }
        vis[k] = 1;
            for (int j = 2; j <= n; j++) {
//                更新距离
                if(d[j] > minn + m[k][j] && vis[j]==0){
                    d[j] = minn + m[k][j];
                }
            }
        }
}
int main(){
   int t, n, u, v, w;
    while(cin >> t >> n){
        memset(m, Inf, sizeof(m));
        for (int i = 0; i <= 1010; i++) {
//            初始化
            m[i][i] = 0;
        }
        for (int i = 1; i <= t; i++) {
             cin >> u >> v >> w;
            if(w < m[u][v]){
//                重边
                m[u][v]=m[v][u] = w;
            }
        }
        dijkstra(n);
        cout << d[n] <<endl;
    }

    return 0;
}