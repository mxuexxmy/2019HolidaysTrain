//
// Created by longxing on 19-7-22.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ps;
    int ans_max = 0;
    for (int i = 2; i <= sqrt(n); ++i) {
       int k = i,cnt = 0 , temp = n;
        while(temp % k == 0){
            temp /= k++;
            cnt++;
//            cout << cnt <<endl;
        }
        if(cnt > ans_max){
            ans_max = cnt;
            ps = i;
        }
    }
    if(ans_max == 0){
        printf("1\n%d\n", n);
    }else {
        printf("%d\n",ans_max);
        for (int i = 1; i <=ans_max ; ++i) {
               printf("%d",ps++);
            if(i < ans_max)
                printf("*");
        }
    }
    return  0;
}