//
// Created by longxing on 19-7-19.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> lx;
    //int lx[1000];
    queue<int> zyr;
    int n , r;
    cin >> n >> r;
    while (n){
        lx.push(n % r);
        zyr.push(n % r);
        n /= r;
    }
    cout << "栈：" ;
    while(!lx.empty()){
       cout << lx.top();
        lx.pop();
    }
    cout<<endl;
    cout <<"队列:" ;
    while(!zyr.empty()){
       cout << zyr.front();
        zyr.pop();
    }
    return  0;
}