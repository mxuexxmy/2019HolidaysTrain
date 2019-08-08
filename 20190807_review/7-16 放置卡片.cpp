//
// Created by longxing on 19-8-7.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
     float n;
    while(cin >> n, n){
        float  sum = 0;
        int cnt = 0;
        for (int i = 2; sum <= n ; ++i) {
            sum +=(1/((float)i));
          //  cout << sum <<endl;
            cnt++;
        }
        cout << cnt <<" card(s)" <<endl;
    }
    return 0;
}
