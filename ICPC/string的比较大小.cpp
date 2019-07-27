//
// Created by longxing on 19-7-18.
//
#include <bits/stdc++.h>
using  namespace std;
int main(){
     string s1 = "longxing" , s2= "zengyirong", s3 = "longxing", s4 = "lx" ,s5 ="zyr";
    int k = s1.compare(s2);
    int k1 = s1.compare(s3);
    int k2 = s1.compare(s4);
    int k3 = s1.compare(s5);

    int k4 = s5.compare(s4);
    cout << k << ' ' << k1 << " " <<k2 <<" " <<k4 <<endl;
     return  0;
}