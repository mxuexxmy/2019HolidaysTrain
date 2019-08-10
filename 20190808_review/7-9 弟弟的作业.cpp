//
// Created by longxing on 19-8-8.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b , c, d, cnt =0;
    char ch, s[4];
    while(scanf("%d%c%d%c%s", &a, &ch, &b,&ch,s)!=EOF){
        c =atoi(s);
        if(a + b ==c || a - b == c)
            cnt++;
    }
    cout << cnt <<endl;
    return 0;
}
