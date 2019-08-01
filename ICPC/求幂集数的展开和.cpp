//
// Created by longxing on 19-7-30.
//

#include <bits/stdc++.h>
using  namespace std;
int main(){
    double n,sum = 1, ans = 0,a,b = 1;
    cin >> n;

    for (int i = 1; ; ++i) {
         //a *= a;
        a = pow(n, i);
         b *= i;
        sum = a / b;
        if(sum <= 0.000001) break;
        ans += sum;
       // cout << a <<endl;

    }
    //cout << ans + 1 <<endl;
    printf("%.4lf\n",ans + 1);
    return 0;
}