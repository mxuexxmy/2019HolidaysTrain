//
// Created by longxing on 19-7-20.
//

#include <bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    char ch;
    cin >> n >>ch;
    int k = sqrt((n+1)/2) ;
    for (int i = k; i >0; i--) {
         for(int j=0; j<k-i; j++)
             cout << " ";
        for (int j = 0; j < 2*i-1; j++) {
            cout << ch;
        }
        cout<<endl;
    }
    for (int i = 2; i <=k; i++) {
        for(int j=0; j<k-i; j++)
            cout << " ";
        for (int j = 0; j < 2*i-1; j++) {
            cout << ch;
        }
        cout<<endl;
    }
   printf("%d\n",n-k*k*2+1);
    return  0;
}