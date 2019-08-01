//
// Created by longxing on 19-7-30.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int  a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
          cin >> a[i];
    }
    int k;
    cin >> k;
    int x1 = binary_search(a, a + n, k);
    int x2 = lower_bound(a, a + n, k) - a;
    int x3  = upper_bound(a , a + n, k) - a;
    cout << x1 << " "<< x2 << " " << x3 <<endl;
    return 0;
}