//
// Created by longxing on 19-8-6.
//

#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int id;
    string s;
    int flag ;
}N;
int main(){
     int n;
     cin >> n;
     N stu[55];
    for (int i = 1; i <= n; ++i) {
         cin >> stu[i].id >> stu[i].s;
        stu[i].flag = 1;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j > 0; --j) {
             if(stu[i].id != stu[j].id && stu[i].flag && stu[j].flag){
                 cout << stu[i].s <<" " <<stu[j].s <<endl;
             stu[i].flag = 0, stu[j].flag=  0;
             }
        }
    }
    return 0;
}