//
// Created by longxing on 19-8-6.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char ch;
    cin >> n >> ch;
    int k = sqrt((n + 1) / 2);
   // cout << k <<endl;
    int size  = k + 2;
    int size1 = k + 2;
    for (int i = k; i > 0 ; --i) {
        for (int j = i; j < k ; ++j) {
            printf(" ");
        }
        for (int l = 0; l < 2 * i -1; ++l) {
            printf("%c",ch);
        }
        printf("\n");
    }
    for (int i = 2; i <= k ; ++i) {
        for (int j = i; j < k; ++j) {
            printf(" ");
        }
        for (int l = 0; l < 2 * i - 1; ++l) {
            printf("%c", ch);
        }
        printf("\n");
    }
        printf("%d",n - 2 * k *k +1 );
    return 0;
}
