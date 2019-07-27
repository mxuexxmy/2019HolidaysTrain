//
// Created by longxing on 19-7-20.
//
#include <bits/stdc++.h>
using namespace std;
typedef  struct  node{
    int sex;
    string s;
    int flag;
}N;
int main(){
    int n;
    cin >> n;
    N node[n];
    for (int i = 0; i < n; ++i) {
        cin >>node[i].sex >> node[i].s;
    }

    for (int j = 0; j < n; ++j) {
        for (int i = n - 1; i > 0 ; --i) {
            if(node[j].sex != node[i].sex &&
               node[j].flag != 1 && node[i].flag!=1){
                cout <<node[j].s<<" "<<node[i].s<<endl;
                node[j].flag =1;
                node[i].flag =1;
                break;
            }
        }
    }
    return 0;
}
