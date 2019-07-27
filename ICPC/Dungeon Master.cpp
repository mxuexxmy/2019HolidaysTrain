//
// Created by longxing on 19-7-17.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

const  int INF = 0x3f3f3f3f;
int L,R,C;
typedef struct p{
    //坐标
    int x, y, z;
}M;

char ma[35][35][35]; //地图
int d[35][35][35];  //存储起点
int sx,sy,sz,ex,ey,ez;
int D[6][3]={1,0,0,-1,0,0,0,1,10,-1,00,0,1,0,0,-1};

int bfs(){

    queue<M> q;//队列
    memset(d, INF, sizeof(d)); //初始化
    d[sx][sy][sz] = 0;
    M m;
    m.x =sx ,m.y = sy,m.z =sz;
     q.push(m); //为什么q.push()不对
    while(q.size()){
      M temp = q.front();
        q.pop();
        if(temp.x  == ex && temp.y == ey && temp.z ==ez) break;
        for (int i = 0; i < 6 ; ++i) {
            int nx = temp.x + D[i][0] ,ny = temp.y + D[i][1] , nz = temp.z+D[i][2];
            if((nx >= 0 && nx <= L) && (ny >= 0 && ny <= R) && (nz >= 0 &&nz <= C )&&
                 ma[nx][ny][ny] != '#' && d[nx][ny][nz]==INF  ){
               M ans ;
                ans.x =
            }
        }
    }

    return  d[ex][ey][ez];
}
int main(){
    while(cin >> L >> R >> C){

        if(L==0 && R== 0 && C ==0){
            for (int i = 0; i < L ; ++i) {
                for (int j = 0; j < R ; ++j) {
                    for (int k = 0; k <C ; ++k) {
                        cin >> ma[i][j][k];
                        if(ma[i][j][k] == 'S') sx = i, sy = j ,sz =k;
                        if(ma[i][j][k] =='E') ex = i,ey = j, ez =k;
                    }
                }
                getchar();
            }
        }

        int num = bfs();
        if(num != INF){
            printf("Escaped in %d minute(s).\n",num);
        } else{
            printf("Trapped!\n");
        }
    }
    return  0;
}
