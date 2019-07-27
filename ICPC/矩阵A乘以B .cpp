//
// Created by longxing on 19-7-19.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[110][110] ,b[110][110], c[110][110];
    memset(a,0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c,0, sizeof(c));
    int ra,ca,rb,cb;
    cin >> ra >> ca;
    //矩阵A
    for (int i = 0; i <ra ; ++i) {
        for (int j = 0; j <ca ; ++j) {
          cin >> a[i][j];
        }
    }
    cin >> rb >> cb;
   //矩阵B
    for (int k = 0; k <rb ; ++k) {
        for (int i = 0; i <cb ; ++i) {
            cin >> b[k][i];
        }
    }
    //判别
    if(ca != rb){
        cout <<"Error: "<<ca <<" != "<<rb<<endl;
    }else {
        //计算两个矩阵
        for (int j = 0; j < ra; ++j) {
            for (int i = 0; i < cb; ++i) {
                for (int k = 0; k < ca; ++k) {
                    c[j][i] += a[j][k] * b[k][i];
                }
            }
        }
        cout << ra << " " << cb <<endl;
        for (int m = 0; m < ra ; ++m) {
            for (int i = 0; i < cb; ++i) {
                if(i == 0)
                    cout<< c[m][i];
                else
                cout<<" "<<c[m][i];
            }
            cout<<endl;
        }

    }

    return  0;
}
