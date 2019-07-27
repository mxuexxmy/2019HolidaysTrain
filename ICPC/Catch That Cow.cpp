//
// Created by longxing on 19-7-18.
//


#include <queue>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using  namespace std;
int n , k;
int a[100010] = {0};
struct  node{
    int x,cnt;
};
int bfs(){
    if(n == k)
        return 0;
    node t;
    t.x = n;
    t.cnt = 0;
    queue<node> q;
    q.push(t);
    a[n] = 1;
    while(!q.empty()){
        t = q.front();
        q.pop();
        //走一步
        if(t.x + 1 < 100010 && a[t.x + 1] == 0){
            if(t.x +1 == k) return  t.cnt +1 ;
            a[t.x + 1] = 1;
            q.push({t.x + 1, t.cnt +1 });
        }
        //传送带
        if(t.x * 2 < 100010 && a[t.x * 2] == 0){
            if(t.x * 2 == k) return  t.cnt +1 ;
            a[t.x * 2 ] = 1;
            q.push({t.x * 2, t.cnt +1 });
        }
        //后退一步
        if(t.x -1 >= 0){
            if(t.x - 1 < 100010 && a[t.x - 1] == 0){
                if(t.x - 1 == k) return  t.cnt +1 ;
                a[t.x - 1] = 1;
                q.push({t.x - 1, t.cnt +1 });
            }
        }
    }

}
int main(){
    cin >> n >> k;
    cout << bfs() <<endl;

    return  0;
}