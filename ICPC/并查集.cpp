//
// Created by longxing on 19-7-23.
//

#include <bits/stdc++.h>
using namespace std;
int f[100];
//初始化
void Init(){
    for (int i = 0; i < 100; ++i) {
        f[i] = i;
    }
}
//查找
int  find(int x){
      if(x == f[x]) return  x;
    else return  f[x] = find(f[x]);
}
//合并
int Union(int x , int y){
    int fx = find(x);
    int fy = find(y);
    if(fx != fy){
        f[fy] = fx;
    }

}
int main(){

    return 0;
}