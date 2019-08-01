//
// Created by longxing on 19-7-31.
//
#include <iostream>
using namespace std;
int n;
void dfs(int u, int state){
    if(u == n){
        for (int i = 0; i < n; ++i) {
             if(state >> i & 1)
                 cout << i + 1 << " ";
        }
        cout <<endl;
        return;
    }
    dfs(u + 1, state);
    dfs(u + 1, state | 1 << u);
}
int main(){
     cin >> n;
     dfs(0,0);
    return 0;
}