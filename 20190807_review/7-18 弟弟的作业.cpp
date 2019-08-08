//
// Created by longxing on 19-8-7.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, cnt = 0;
    char ch,ch1;
    while(scanf("%d%c%d%c%d",&a,&ch,&b,&ch1,&c) != EOF){
        if(c == 0) continue;
        if(ch = '+'){
            if(a + b ==c) cnt++;
        }else if(ch == '-'){
            if(a - b ==c) cnt++;
        }
        cout << cnt <<endl;
    }
    cout << cnt <<endl;
    return 0;
}