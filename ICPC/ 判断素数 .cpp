//
// Created by longxing on 19-7-17.
//
#include <bits/stdc++.h>
using namespace std;
int sushu(int n){
    for(int i  = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return  0;
        }
    }
    return  1;
}
int main(){
    int n;
    int x;
    cin >> n;
    while(n--){
        cin >> x;
        if(sushu(x)){
            if(x == 1)
                cout << "No" <<endl;
            else
            cout << "Yes" <<endl;
        }else  {
            cout << "No" <<endl;
        }
    }
    return 0;
}
