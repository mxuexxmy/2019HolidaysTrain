//
// Created by longxing on 19-7-31.
//

#include <bits/stdc++.h>
using namespace std;
int fa[100010];
int find(int x){
    if(fa[x] == x) return  x;
    else return fa[x]  =find(fa[x]);

}
void Union(int x, int y){
    int fx = find(x);
    int fy = find(y);
    if(fx != fy)
        fa[fx] = fy;
}
int main(){
    int t;
    cin >> t;
    int cnt = 0;
    while (t--){
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; ++i) {
            fa[i]=i;
        }
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            Union(x, y);
        }
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
             if(fa[i] == i) sum++;
        }
        cnt++;
        printf("Case %d: %d\n", cnt, sum );
    }

    return 0;
}