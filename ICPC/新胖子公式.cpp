//
// Created by longxing on 19-7-18.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
   float  h,w;
    cin >> w >> h;
    float  k = w / (h * h);
    if(k > 25){
        printf("%.1f\n", k);
        printf("PANG\n");
    } else{
        printf("%.1f\n", k);
        printf("Hai Xing\n");
    }

    return  0;
}