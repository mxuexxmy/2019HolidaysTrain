//
// Created by longxing on 19-7-20.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using  namespace std;
int main(){
    stack<int> s[100000];
    int n;
    scanf("%d", &n);
    int x;
    scanf("%d", &x);
    s[0].push(x);
    int arr = 0;
    for (int i = 1; i < n; ++i) {
        scanf("%d", &x);

        int flag = 1;
        for (int j = 0; j <= arr; ++j) {
            if( x < s[j].top()){
                s[j].push(x);
                flag = 0;
                break;
            }

        }
        if(flag){
            arr++;
            s[arr].push(x);
        }
    }
    cout << arr+1<<endl;
    return 0;
}