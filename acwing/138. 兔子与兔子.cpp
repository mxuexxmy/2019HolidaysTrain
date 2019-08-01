//
// Created by longxing on 19-7-31.
//

#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long //无符号自动取模

#define Hash 131
const  int  MAX = 1e6 + 10;
ll p[MAX], sum[MAX];
char s[MAX];
int main(){
    scanf("%s", s + 1);
    int  k = strlen(s  + 1);
    int n;
    cin >> n;
    p[0] = 1;

    for (int i = 1; i <= k; ++i) {
         sum[i] = sum[i - 1]*Hash + (s[i] - 'a' + 1);
        p[i] = p[i - 1]*Hash;
        cout << sum[i] <<endl;
    }

    int r1, l1, r2, l2;
    for (int i = 1; i <= n; ++i) {
         cin >> l1 >>r1 >>l2 >>r2;
        if(sum[r1] - sum[l1 - 1]* p[r1  - l1 + 1] == sum[r2] - sum[l2 -1]* p[r2 -l1 + 1]){
            cout <<"Yes"<<endl;
        }else{
            cout<< "No" <<endl;
        }
    }

    return 0;
}