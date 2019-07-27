//
// Created by longxing on 19-7-22.
//

#include <bits/stdc++.h>
using  namespace std;
typedef  struct  node{
    string name;
    int gz; //关注数
}N;
bool  cmp(N a, N b){
    return  a.name < b.name;
}
int main(){
    int n;
    cin >> n;
    map<string,int > Map;
    for (int i = 0; i < n; ++i) {
        string x;
        cin >> x;
        Map[x] = 1;
    }
    int m;
    cin >> m;
    N  node[m] ;
    int sum  = 0;
    for (int j = 0; j < m; ++j) {
       cin >> node[j].name >> node[j].gz ;
        sum += node[j].gz;
    }
    float avg = sum / m;
    sort(node,node + m , cmp);
    int flag =  1;
    for (int k = 0; k < m; ++k) {
      if(Map[node[k].name] != 1 && node[k].gz > avg){
          cout << node[k].name <<endl;
          flag = 0;
      }
    }
    if(flag){
        cout <<"Bing Mei You" <<endl;
    }
    return  0;
}