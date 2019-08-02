#include <bits/stdc++.h>
using namespace std;
char ch[9][9];
bool flag[9];
int ans = 0, cnt = 0;
int n ,k;
void dfs(int row, int x){
  if(x >= k){
      ans++;
      return;
  }
  if(row > n )
    return ;

    for(int i = 1 ; i < n; i++){
        if(!flag[i] && ch[row][i] == '#'){
            flag[i] = true;
            dfs(row++ , x++);
            flag[i] = false;

        }
    }

  return dfs(row + 1, x);
}
int main(){
  while(cin >> n >> k ){
        ans = 0;
        memset(flag,false ,sizeof(flag));
        memset(ch , false, sizeof(ch));
    if(n == -1 && k == -1)
        return 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> ch[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
          cout << ch[i][j] << " ";
        }
        cout << endl;
    }

    dfs(1, 0);
    cout << ans <<endl;
  }
  return 0;
}
