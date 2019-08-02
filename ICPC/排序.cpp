//
// Created by longxing on 19-8-2.
//

#include <bits/stdc++.h>
using namespace std;
int a[100050];
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
   sort(a, a + n);
    for (int i = 0; i < n; ++i) {
      /*
       * 输出控制－１
       */
      // i == (n - 1)? printf("%d\n",a[i]):printf("%d%c",a[i],' ');
        /*
         * 输出控制－２
         */
        printf("%d%c",a[i],i == (n-1) ?'\n':' ');
    }
    return 0;
}