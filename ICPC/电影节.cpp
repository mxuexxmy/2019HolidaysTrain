#include <bits/stdc++.h>
using namespace std;
int f[100100];
int find(int x){
    if(x==f[x])return x;
    else return f[x]=find(f[x]);
}
void HB(int x,int y){
    int fx=find(x);
    int fy=find(y);
    if(fx!=fy){
        f[fy]= fx;
    }
}
int main(){
    int n,m,a,b,c,d,i;
    while(~scanf("%d%d",&n,&m)) {
        for (i = 1; i <= n; i++)f[i] = i;
        while (m--) {
            scanf("%d%d", &a, &b);
            HB(a, b);
        }
        scanf("%d%d", &c, &d);
        if (f[c] == f[d])printf("same\n");
        else printf("not sure\n");
    }
}