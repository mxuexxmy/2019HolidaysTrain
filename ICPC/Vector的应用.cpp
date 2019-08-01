//
// Created by longxing on 19-7-29.
//

#include <bits/stdc++.h>
using  namespace std;
int main(){
  /*  vector<int> a;
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; ++i) {
       //  cout << a[i] << " ";
        cout << a.front();
        a.pop_back();

    }
    */
    vector<int> a[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout<<endl;

        }
    return 0;
}