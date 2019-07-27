//
// Created by longxing on 19-7-19.
//
//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <cstring>
using  namespace std;
int pri1 ,pri2;
int pr[10010] ={0}; //如果为1就是素数
int vit[10010] ={0}; //用于标记走过的路
struct node{
    int x;
    int cnt;//统计次数
};
int pri(int n){ //判断素数，记录素数
    for (int i = 3; i * i <= n; i+=2) {
          if(n % i == 0) return  0;
    }
    return  1;
}
void Init(){
    //对素数进行初始化
    for (int i = 1001; i <= 9999 ; i+=2) {
        pr[i] = pri(i);
    }
}

void bfs( ){
    if(pri1 == pri2) {
        cout << 0 <<endl;
        return;
    }
    memset(vit,0, sizeof(vit));
    vit[pri1] = 1;
    queue<node> q;
    q.push(node{pri1, 0}); //开始的时候，进队列
    while(!q.empty()){
        node t;
        t = q.front(); //取队列的元素
        q.pop(); //出队列
        //个位数
        for (int i = 1; i <= 9 ; i += 2) {
            int ne = t.x / 10 * 10 + i;
            if(ne == pri2){
                cout<< t.cnt + 1 <<endl;
                return;
            }
            if(pr[ne] && vit[ne] == 0){
                vit[ne] = 1;
                q.push(node{ne,t.cnt+1});
            }

        }
        //十位数
        for (int i = 0; i <= 9 ; i ++) {
            int ne = t.x / 100 * 100 + i*10 + t.x % 10;
            if(ne == pri2){
                cout<< t.cnt + 1 <<endl;
                return;
            }
            if(pr[ne] && vit[ne] == 0){
                vit[ne] = 1;
                q.push(node{ne,t.cnt+1});
            }

        }
        //百位数
        for (int i = 0; i <= 9 ; i ++) {
            int ne = t.x / 1000 * 1000 + i*100 + t.x % 100 ;
            if(ne == pri2){
                cout<< t.cnt + 1 <<endl;
                return;
            }
            if(pr[ne] && vit[ne] == 0){
                vit[ne] = 1;
                q.push(node{ne,t.cnt+1});
            }

        }
        //千位数
        for (int i = 1; i <= 9 ; i ++) {
            int ne =t.x % 1000 + i * 1000;
            if(ne == pri2){
                cout<< t.cnt + 1 <<endl;
                return;
            }
            if(pr[ne] && vit[ne] == 0){
                vit[ne] = 1;
                q.push(node{ne,t.cnt+1});
            }

        }
    }
    cout <<"Impossible"<<endl;
}
int main(){
    Init();
    int n;
    cin >> n;
    while(n--){
        cin >> pri1 >> pri2;
        bfs();
    }
    return  0;
}