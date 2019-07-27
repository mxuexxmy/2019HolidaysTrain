//
// Created by longxing on 19-7-22.
//
/*
 * 最小生成树算法，ｐｒｉｍ算法
 */
//#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using  namespace std;
const  int Max = 30;
const  int INF = 0x3f3f3f3f;
int road[Max][Max],dis[Max];
bool  vis[Max];
int n;
void  prim(){
   int  minn, v;
//    初始化
    for (int i = 0; i < n; ++i) {
        dis[i] = road[0][i];
        vis[i]= false;
    }
    for (int i = 1; i <= n; ++i) {
//        加ｎ个点
        minn = INF;
        for (int j = 0; j < n; ++j) {
            if(!vis[j] && minn > dis[j]){
                minn  =dis[j];
                v= j;
              }
            }
        vis[v] = true; //选择的点进行标记
        for (int j = 0; j < n; ++j) {
            if(!vis[j] && dis[j] > road[v][j]){
                dis[j]  =road[v][j];
            }
        }
    }

    for (int i = 1; i < n; ++i) {
        dis[0] += dis[i];
    }
    cout << dis[0] <<endl;
}
int main(){
    int m,w;
    char s[5],en[5];
    while (cin >> n , n){
           memset(road , INF ,sizeof(road));
        for (int i = 0; i < n; ++i) {
            road[i][i] = 0;
        }

        for (int i = 0; i < n; ++i) {
            scanf("%s%d",s ,&m);
            for (int j = 0; j < m; ++j) {
                 scanf("%s%d",en, &w);
                road[s[0] - 'A'][en[0] - 'A'] = road[en[0] - 'A'][s[0] - 'A'] = w;
            }
        }
    }

    return 0;
}