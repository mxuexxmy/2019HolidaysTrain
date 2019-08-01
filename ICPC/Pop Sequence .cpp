//
// Created by longxing on 19-7-29.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    while (k--) {
        int a[1010];
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        stack<int> s;
        int arr = 0, flag = 1;
        //进栈，与出栈
        for (int i = 1; i <= m; ++i) {
            s.push(i); //进栈
            if (s.size() > n) {//如果栈的长度大于所给我长度，就返回
                flag = 0;
                break;
            }
            while (!s.empty() && s.top() == a[arr]) {
                //如果栈不为空，并且栈顶元素与数组元素相等，那么我们就出栈，并且数组下标就＋＋
                s.pop();
                arr++;
            }
        }
        if (!s.empty()) flag = 0;//如果结束了，最后栈还有元素，那么这个出栈系列那也没有
        if (flag) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}