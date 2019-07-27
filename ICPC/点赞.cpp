//
// Created by longxing on 19-7-20.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[1010]={0};
    int n;
    cin  >> n;
//    输入
    while(n--){
        int k;
        cin >> k;
        while (k--){
            int x;
            cin >> x;
            a[x]++;
        }
    }

//    for (int j = 0; j < 1000 ; ++j) {
//        cout<< a[j] << " ";
//
//    }
//    cout << endl;
//    查找最大值及编号
    int now_max = a[0], ps= 0;
    for (int i = 0; i <1001 ; ++i) {
         if(a[i] >= now_max){
             ps = i;
             now_max = a[i];
//             cout <<ps << " "<< now_max <<endl;
         }
    }
    cout <<ps << " "<< now_max <<endl;
    return  0;
}