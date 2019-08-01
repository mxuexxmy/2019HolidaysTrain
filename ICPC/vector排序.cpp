//
// Created by longxing on 19-8-1.
//

#include <bits/stdc++.h>
using namespace std;
struct node{
    int x;
    bool  operator < (const node& b) const {
        return  x > b.x;
    }
};

int main(){
    vector<node> a[10];
    priority_queue<node> q[10];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int x;
           scanf("%d",&x);
            node t;
            t.x= x;
         //  a[i].push_back(t);
            q[i].push(t);
        }
       // sort(a, a +5);
    }
    sort(a , a + 5);
    for (int i = 0; i < 5; ++i) {
           while(q[i].size()){
               node t = q[i].top();
                cout <<t.x ;
               q[i].pop();
           }

      cout<<endl;
    }
    return  0;
}