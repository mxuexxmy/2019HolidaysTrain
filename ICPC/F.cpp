#include <cstdio>
#include <cstring>
#include <bits/stdc++.h>
typedef long long ll;
const int INF=0x3f3f3f3f;
const int MOD=1e9+7;
const int MAXN=1e3+5;

using namespace std;

struct node{
    ll F,S;
}a[MAXN],b[MAXN],t;
ll  pos( node a,node b)
{
    return ( (a.F-b.F)*(a.F-b.F)+ (a.S-b.S)*(a.S-b.S) );
}
ll R[MAXN];
int V[MAXN];
char s[500000];
int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        getchar();
        if(n==0&&m==0)
            break;
        memset(V,0,sizeof(V));
        for(int i=1;i<=m;i++)
        {
            ll x,y;
            scanf("%s",s);
            sscanf(s,"(%lld,%lld)",&x,&y);
            a[i].F=x;
            a[i].S=y;
        }
        getchar();
        for(int i=1 ; i<=n ; i++)
        {
            ll x,y;
            scanf("%s",s);
            sscanf(s,"(%lld,%lld)",&x,&y);
            b[i].F=x;
            b[i].S=y;
        }
        for(int i=1 ; i<=n ; i++)
            scanf("%lld",&R[i]);

        for(int i=1 ; i<=n ; i++)
        {
            int ans=0;
            for(int j=1 ; j<=m ; j++)
            {
                ll POS=pos(b[i],a[j]);
                if(POS<=(R[i]*R[i]))
                    ans++;
            }
            V[i]=ans;
        }

        for(int i=1;i<=n;i++)
            printf("%d%c",V[i],i==n?'\n':' ');
    }
    return 0;
}