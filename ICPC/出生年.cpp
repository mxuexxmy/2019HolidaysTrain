//
// Created by longxing on 19-7-17.
//

#include <bits/stdc++.h>
using  namespace std;
int main(){
    int y, n;
      cin >> y >> n;
        for (int i = y; i <=3010 ; i++) {
            int cnt = 0;
            int a[10] = {0};
            a[i % 10]++;
            a[i / 10 % 10]++;
            a[i / 100 % 10]++;
            a[i / 1000 % 10]++;
            for(int j = 0 ; j < 10; j++){
                if(a[j]!= 0){
                    cnt++;
                }
            }
            if(cnt == n){
                // cout << i - y << " " << i <<endl;
                printf("%d %04d\n", i - y, i);
                break;
            }
        }



    return  0;
}