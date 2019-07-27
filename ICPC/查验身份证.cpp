//
// Created by longxing on 19-7-18.
//
/*
 * 首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；然后将计算的和对11取模得到值Z；
 * Z：0 1 2 3 4 5 6 7 8 9 10
 * M：1 0 X 9 8 7 6 5 4 3 2
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int qz[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int z[11] ={0,1,2,3,4,5,6,7,8,9,10};
    char m[11] ={'1','0','X','9','8','7','6','5','4','3','2'};
    int n, flag = 1;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < 17; ++i) {
            sum += (s[i] - '0')*qz[i];
        }
        if(m[z[sum %11]] != s[17]){
            cout << s <<endl;
            flag = 0;
        }
    }
    if(flag){
        cout << "All passed" <<endl;
    }
    return  0;
}