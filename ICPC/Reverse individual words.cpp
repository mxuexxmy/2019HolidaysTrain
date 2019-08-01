//
// Created by longxing on 19-7-27.
//
/*
Given a string str, we need to print reverse of individual words.

Examples:

        Input : Hello World
Output : olleH dlroW

        Input :  Geeks for Geeks
        Output : skeeG rof skeeG
 */
#include <bits/stdc++.h>
using  namespace std;
void print(string s){
    stack<char> ch;
    for (int i = 0; i <s.length() ; ++i) {
        if(s[i] != ' '){
            ch.push(s[i]);
        }else {
            while(ch.empty() == false){
                cout << ch.top();
                ch.pop();
            }
            cout << " ";
        }
    }
    while (ch.empty() == false){
        cout << ch.top();
        ch.pop();
    }
    cout <<endl;
}
void print1(string s){
//    字符串反转函数
   string word;

    stringstream istr(s);
    while(istr >> word){
        reverse(word.begin(),word.end());
        cout << word <<" ";
    }

}
int main(){
    string s;
    while(getline(cin ,s)){
        print(s);
        print1(s);
    }
    return 0;
}