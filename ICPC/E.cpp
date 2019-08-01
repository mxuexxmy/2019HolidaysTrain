//
// Created by longxing on 19-8-1.
//

/*
 * ICPC Asia HongKong 2017
 */
#include <bits/stdc++.h>
using namespace std;
const  int Inf = 0x3f3f3f3f;
int a[100050];
int main(){
   int l, s;
    while (cin >> l >> s , l, s){
      memset(a, 0, sizeof(a));
        for (int i = 0; i < l; ++i) {
            scanf("%d", &a[i]);
        }
        sort(a, a + l);
        int cnt = 2;
        int left = 0, right = 1e6,mid;
        /*
         * 二分查找正确答案
         */
        while (left <= right){
             mid = (left + right) / 2;
           // cout << mid <<endl;
            int cnt = 1, now = 0;
            for (int i = 1; i < l; ++i) {
                  if(a[i] - a[now] >= mid){
                      cnt++;
                      now = i;
                  }
            }
            if(cnt >= s) left  = mid + 1;
            else right = mid - 1;
        }
        cout << left - 1 <<endl;
    }
    return 0;
}