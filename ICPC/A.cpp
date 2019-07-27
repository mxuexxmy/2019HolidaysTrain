//
// Created by longxing on 19-7-23.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
using  namespace std;
int f[27];
struct  edge{
    int va;
    int vb;
    int disc;
}road[110];
bool cmp(edge a, edge b){
    return  a.disc < b.disc;
}
int Find(int x){
    return  f[x]==x?x:f[x]=Find(f[x]);
}
int main(){
    int  n, k, dist , num ,ans;
    char sedge, eedge; //起点
    while (cin >> n , n){
        ans = k = 0;
        for (int i = 0; i < 27; ++i) {
           f[i] = i;
        }
        for (int i = 0; i < n-1; ++i) {
         cin >> sedge >> num;
            for (int j = 0; j < num; ++j) {
                cin >> eedge >> dist;
                road[k].va = sedge - 'A';
                road[k].vb = eedge - 'A';
                road[k].disc = dist;
                k++;
            }
        }
        sort(road , road + k, cmp);
        for (int i = 0; i < k; ++i) {
            int x= Find(road[i].va);
            int y = Find(road[i].vb);
            if(x!=y){
                ans += road[i].disc;
                f[x] = y;
            }
        }
        cout << ans <<endl;
    }

    return 0;
}