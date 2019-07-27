//
// Created by longxing on 19-7-20.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int thismax = 0 ,maxx  = 0;
    for (int j = 0; j < n ; ++j) {
        thismax += a[j];
        if(thismax > maxx){
            maxx = thismax;
        } else if(thismax < 0){
            thismax = 0;
        }
    }
   cout << maxx <<endl;
    return  0;
}