//
// Created by longxing on 19-7-31.
//

#include <iostream>
using namespace std;
int n, m;
void dfs(int u,int sum ,int state){
    if(sum + n - u < m) return;;
    if(sum == m){
        for (int i = 0; i < n; ++i) {
            if(state >> i & 1)
                cout << i + 1 << " ";
        }
        cout <<endl;
        return;
    }
   if(u == n)
       return;
    dfs(u + 1,sum + 1, state | 1 << u);
    dfs(u + 1,sum , state);
}
int main(){
    cin >> n >> m;
    dfs(0,0,0);
    return 0;
}