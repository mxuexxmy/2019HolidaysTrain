//
// Created by longxing on 19-7-29.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n, m, k;
    cin >> n >> m >> k;
    while (k--) {
        int a[1010], x;
        for (int i = 1; i <= n; ++i) {
            a[i] = i;
        }
        stack<int> s;
        int arr = 1, flag = 1;
        for (int i = 1; i <= n; ++i) {
            cin >> x;
            s.push(x);
            if (s.size() > m) {
                flag = 0;
                //break;
            }
            while (!s.empty() && s.top() == a[arr]) {
                s.pop();
                arr++;
            }
        }
        if (!s.empty()) flag = 0;
        if (flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}