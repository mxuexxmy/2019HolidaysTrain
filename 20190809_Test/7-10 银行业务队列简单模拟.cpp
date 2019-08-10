//
// Created by longxing on 19-8-9.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<int> a, b;
    int n, x;
    queue<int> q;
    cin >> n;
    for (int i = 0; i < n; ++i) {
         cin >> x;
        if( x& 1){
            a.push_back(x);
        } else{
            b.push_back(x);
        }
    }
   int  cnt = 0, cnta = 0, cntb  = 0;
//    while (  cnta + cntb <= n ){
//        if(cnta < a.size()){
//           // cout << cnta << " " <<cntb <<endl;
//            q.push(a[cnta]);
//            cnta++;
//        }
//        if(cnta < a.size()){
//            q.push(a[cnta]);
//            cnta++;
//        }
//        if(cntb < b.size()){
//            q.push(b[cntb]);
//            cntb++;
//        }
//    }
  // cout << q.size() <<endl;
    int k;
    for (int i = 0;i < n ; ) {
        //int k = q.front();
        if(cnta < a.size()){
            k = a[cnta];
            cnta++;
            printf("%d%c", k, i == n - 1?'\n' : ' ');
            i++;
        }
        if(cnta < a.size()){
            k = a[cnta];
            cnta++;
            printf("%d%c", k, i == n - 1?'\n' : ' ');
            i++;
        }
        if(cntb < b.size()){
            k = b[cntb];
            cntb++;
            printf("%d%c", k, i == n - 1?'\n' : ' ');
            i++;
        }
    }
    return 0;
}
