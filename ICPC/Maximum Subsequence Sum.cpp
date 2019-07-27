//
// Created by longxing on 19-7-20.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
      cin >> n;
     int a[10010];
    int now_max= 0, ans_max= -1 ,s = 0 ,e = n - 1 , cnt = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
        now_max += a[i];
        if(now_max < 0){
            now_max = 0;
            cnt = i + 1;
        }else if(now_max > ans_max){
            ans_max = now_max;
            s = cnt;
            e = i;
        }
    }
    if(ans_max < 0)
        ans_max = 0;
    cout << ans_max << " " << a[s] << " " <<a[e] <<endl;


    return 0;
}