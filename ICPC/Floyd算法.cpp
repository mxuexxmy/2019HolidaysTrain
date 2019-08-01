//
// Created by longxing on 19-7-30.
//

#include <bits/stdc++.h>
using namespace std;
int n;
void  Flyod(){
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(i != && j!= k &&ma[i][j] > ma[i][k] + ma[k][j])
                    ma[i][j] = ma[i][k] + ma[k][j];
            }
        }
    }
}
int main(){

    return 0;
}