//
// Created by longxing on 19-7-17.
//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    while(n--){
        float  h, w, std;
        cin >> h >> w;
        std = ((h - 100) * 0.9) *2;
        float  k = fabs(w - std);
        if(k < std * 0.1){
            cout << "You are wan mei!" <<endl;
        }else if(w < std){
            cout << "You are tai shou le!" <<endl;
        }else {
            cout << "You are tai pang le!" <<endl;
        }
    }
    return 0;
}
