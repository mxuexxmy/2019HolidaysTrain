//
// Created by longxing on 19-7-20.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[55][2010];
    int Set[55];
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n ; ++i) {
        int k;
        scanf("%d",&k);
        for (int j = 0; j < k; ++j) {
              scanf("%d",&a[i][j]);
              Set[i] = k;
        }
    }
    int m;
    cin >> m;
    while(m--){
        int x1,x2;
        cin >> x1 >> x2;
        float cnt = 0;
        for (int i = 1; i <= Set[x2] ; ++i) {
            for (int j = 0; j < Set[x1] ; ++j) {
                 if(a[x1][i] == a[x2][j])
                     cnt++;
            }
        }
        cout<< cnt / Set[x2] * 100.0 <<"%"<<endl;
    }
    return 0;
}
//int main(){
////    int a[55][2010];
//    set<int> q[55];
//    int n;
//    scanf("%d",&n);
//    for (int j = 1; j <= n; ++j) {
//        int k;
//        scanf("%d",&k);
//        int x;
//        for (int i = 0; i < k; ++i) {
//            scanf("%d",&x);
//            q[i].insert(x);
//
//        }
//    }
//    int m;
//    scanf("%d", &m);
//    while(m--){
//        float  fz,fm;
//        int x1, x2;
//        cin >> x1 >> x2;
//        cout << q[x1].size() << "  " <<q[x2].size()<<endl;
////        for (int i = 0; i < q[x1].size(); ++i) {
////            for (int j = 0; j < q[x2].size(); ++j) {
////
////            }
////        }
// }
//    return  0;
//}