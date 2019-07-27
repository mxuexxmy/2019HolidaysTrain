//
// Created by longxing on 19-7-24.
//
#include <bits/stdc++.h>
using  namespace std;
int main(){
    int a[10] ,b[10] , c[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
//    for (int i = 0; i < n; ++i) {
//        cin >> b[i];
//    }

    cout << binary_search(a , a + 3 , 3)<<endl;
    return 0;
}