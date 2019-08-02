//
// Created by longxing on 19-8-2.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s[10];
    s[1].push(1);
    s[1].push(2);
    s[1].push(3);
    if(s[1].top() < 4)
        s[1].push(4);
    while (!s[1].empty()){
        cout << s[1].top() <<endl;
        s[1].pop();
    }
   // cout << s[1].top() << " " << s[2].top() << " "<< s[3].top() << " "<<s[4].top()<<endl;
    return 0;
}