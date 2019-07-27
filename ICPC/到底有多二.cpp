//
// Created by longxing on 19-7-19.
//
/*
 *
 * 果这个数是负数，则程度增加0.5倍；如果还是个偶数，则再增加1倍。
 * 例如数字-13142223336是个11位数，其中有3个2，并且是负数，也是偶数，
 * 则它的犯二程度计算为：3/11×1.5×2×100%，约为81.82%
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
//    cout << s <<endl;
    float cnt = 0; //统计2的个数
    for (int i = 0; i < s.length(); ++i) {
        if(s[i] == '2')
            cnt++;
    }
//    判断正负
    int f = 0;
    if(s[0] == '-')
        f= 1;
//    判断偶数
    int ou = 0;
    if((s[s.length()- 1] - '0')  %  2 == 0)
        ou = 1;

//    cout << cnt << " " << f << " "<< ou <<endl;
//    计算
    float  k , len = s.length();
    if(f == 1 && ou == 1){
      k = (cnt / (len - 1))*1.5 *2 * 100;
  }else if(f == 1){
       k = (cnt / (len - 1))*1.5 *1 * 100;
  }else if(ou == 1){
       k = (cnt / len)*1 *2 * 100;
  }else {
        k = (cnt / len)*1 *1 * 100;
  }
    printf("%.2f%%\n",k);
    return  0;
}