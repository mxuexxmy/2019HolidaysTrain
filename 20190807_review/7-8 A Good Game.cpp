//
// Created by longxing on 19-8-7.
//

#include <iostream>
#include <algorithm>
using namespace std;
typedef  long long ll;
ll a[100010], b[100010];
int main(){
    ios::sync_with_stdio(false);
    int t, n, m,l,r;
    ll ans ;
    cin >> t;
    while (t--){
        cin >> n >> m;
        a[0] = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        for (int i = 0; i < m; ++i) {
                cin >> l >> r;
                if(l > r) swap(l, r);
                b[i] = a[r] - a[l -1];
        }
        sort(b, b + m);
        ans =0;
        for (int i = 0; i < m; ++i) {
          ans += b[i] * (i + 1);
        }
        cout << ans <<endl;
    }
    return 0;
}