//
// Created by longxing on 19-7-31.
//

#include <bits/stdc++.h>
using namespace std;
const  int MAX = 300010;

int main(){
    long long n,m,l,r,s[MAX] ={0},a[MAX]={0},ans = 0;
    cin >> n >> m;
    deque<long long> q; //双端队列
    for (long long i = 1; i <= n; ++i) {
      scanf("%lld", &a[i]);
        s[i] = s[i - 1] + a[i];
    }
    for (long long i = 1; i <= n; ++i) {
       while (q.size() && q.front() < i - m)
           q.pop_front();

        ans = max(ans , s[i] - s[q.front()]);

       while(q.size() && s[q.back()] >= s[i])
           q.pop_back();
        q.push_back(i);
       // cout << ans <<endl;
    }
    cout << ans <<endl;
    return 0;
}