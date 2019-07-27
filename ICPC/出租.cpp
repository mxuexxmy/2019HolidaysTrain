//
// Created by longxing on 19-7-17.
//

#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return  a > b;
}
int main(){
     char phone[15];
     scanf("%s", phone);
      int a[11]  ={0};
    cout << strlen(phone) <<endl;
    for (int i = 0; i < strlen(phone) ; ++i) {
          a[phone[i] - '0']++;
    }
    for (int l = 0; l < 11 ; ++l) {
        cout << a[l] <<"";
    }
    cout <<endl;
    int cnt = 0, arr[10];
    for(int i = 0; i < 11; i++) {
        if (a[i] != 0) {
            arr[cnt] = phone[i]-'0';
            cnt++;
        }
    }
        //排序后就是arr
    sort(arr ,arr + cnt, cmp);
     //查找index的值
     int index[11]={0};
        for (int j = 0; j < 11; ++j) {
            for (int i = 0; i < cnt ; ++i) {
                if((phone[j] - '0') == arr[i]){
                    index[j] = i;
                    break;
                }
            }
        }
    //输出arr数组
    cout << "int[] arr = new int[]{";
    for (int k = 0; k <cnt - 1 ; ++k) {
        cout << arr[k] << ",";
    }
        cout << arr[cnt-1] <<"};"<<endl;
    //输出index数组
    cout << "int[] index = new int[]{";
    for (int k = 0; k <10 ; ++k) {
        cout << index[k] << ",";
    }
    cout <<index[10] << "};"<<endl;

    return 0;
}