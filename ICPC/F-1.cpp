//
// Created by longxing on 19-8-1.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;
const int MOD=1e9+7;
const int MAXN=1e3+5;
ll R[MAXN];
int V[MAXN];
char s[1000];
struct node{
   ll x, y;
}a[MAXN], b[MAXN],t;
ll pos(node a, node b){
    return ((a.x - b.x)* (a.x - b.x) + (a.y - b.y) *( a.y - b.y));
}
int main(){
    int m, n;
    while (scanf("%d%d", &m, &n) != EOF){
        if(n == 0 && m == 0) break;
        memset(V, 0 ,sizeof(V));
        for (int i = 0; i < m; ++i) {
           ll x, y;
          //  scanf("%s", s);
            scanf("(%lld,%lld)", &x, &y);
            a[i].x = x;
            a[i].y = y;
        }
        getchar();
        for (int i = 0; i < n; ++i) {
            ll x, y;
           // scanf("%s", s);
            scanf("(%lld,%lld)", &x, &y);
            b[i].x = x;
            b[i].y = y;
        }
        for (int i = 0; i < n; ++i) {
             scanf("%lld" , &R[i]);
        }
        for (int i = 0; i < n; ++i) {
            int cnt = 0;
            for (int j = 0; j < m; ++j) {
               ll p = pos(a[i], b[i]);
                if(p <= (R[i]*R[i]) ){
                    cnt++;
                }
            }
            V[i] = cnt;
        }
        for (int i = 0; i < n; ++i) {
            printf("%d%c",V[i],i==(n-1)?'\n':' ');
        }
    }

    return 0;
}