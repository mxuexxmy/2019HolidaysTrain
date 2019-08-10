//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a[6];
    cin >> n;
   while (n--){
       cin >> a[1] >> a[2] >> a[3] >> a[4];
       sort(a + 1, a + 5);
       cout << a[3] * a[4] - a[1] * a[2] <<endl;
   }
    return 0;
}
