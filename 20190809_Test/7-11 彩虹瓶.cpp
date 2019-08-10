//
// Created by longxing on 19-8-9.
//
/*
 * 栈的进栈与出栈系列
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n, m , k, flag[10050] = {1};
    cin >> n >> m >> k;
    for (int l = 0; l < k; ++l) {
        int a[10500];
        stack<int> s;
        for (int i = 0; i <= n; ++i) {
            a[i] = i;
        }
        int arr = 1, x;
        for (int j = 0; j < n; ++j) {
            cin >> x;
            s.push(x);
            if(s.size() > m){
                flag[l] = 0;
                break;
            }
            while(!s.empty() && s.top() == a[arr]){
                s.pop();
                arr++;
            }
        }
        if(!s.empty()) flag[l] = 0;
    }
    for (int i1 = 0; i1 < k; ++i1) {
        if(flag[i1]) printf("YES\n");
        else printf("NO\n");
    }


    return 0;
}