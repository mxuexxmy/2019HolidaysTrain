//
// Created by longxing on 19-7-22.
//

#include <bits/stdc++.h>
using  namespace std;
typedef  long long LL;
LL gcd(LL a, LL b){
    return  b == 0 ? a : gcd(b, a % b);
}
LL lcm(LL a, LL b){
    return  a / gcd(a,b)  * b;
}
int main(){
    int n;
    LL a, b, c, d;
    cin >> n;
    scanf("%lld/%lld",&a,&b);
    LL t = gcd(a,b);
    if (a){
        a /= t;
        b /= t;
    }
    for (int i = 1; i < n; ++i) {
       scanf("%lld/%lld",&c,&d);
        LL Lcm = lcm(b, d);
        a = a*Lcm/b + c*Lcm/d;
        b = Lcm;
        LL t = gcd(a,b);
        if (a){
            a /= t;
            b /= t;
        }
    }

    if(a && a /b == 0) printf("%lld/%lld\n",a,b);
    else if(a % b == 0)printf("%lld\n", a / b);
    else printf("%lld %lld/%lld\n", a / b, a % b, b);

    return 0;
}