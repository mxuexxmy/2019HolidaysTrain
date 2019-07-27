//
// Created by longxing on 19-7-20.
//
/*
 *  8 岁男宝宝的标准身高为 130 厘米、标准体重为 27 公斤；
 *  8 岁女宝宝的标准身高为 129 厘米、标准体重为 25 公斤。
 *  输入在第一行给出一个不超过 10 的正整数 N，随后 N 行，每行给出一位宝宝的身体数据：
 *  性别 身高 体重
 *  其中性别是 1 表示男生，0 表示女生。
 *  如果太矮了，输出：duo chi yu!（多吃鱼）；
 * 如果太瘦了，输出：duo chi rou!（多吃肉）；
 * 如果正标准，输出：wan mei!（完美）；
 * 如果太高了，输出：ni li hai!（你厉害）；
 * 如果太胖了，输出：shao chi rou!（少吃肉）。
 * 先评价身高，再评价体重。两句话之间要有 1 个空格。
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
       int sex, h , w;
        cin >> sex >> h >> w;
        if(sex == 1){
//           男生
//            身高
            if(h < 130){
                cout << "duo chi yu!" << " ";
            }else if(h == 130){
                cout <<"wan mei!"<<" ";
            }else {
                cout <<"ni li hai!" <<" ";
            }
//           体重
            if(w < 27){
                cout << "duo chi rou!" <<endl;
            }else if(w == 27){
                cout <<"wan mei!"<<endl;
            }else {
                cout <<"shao chi rou!" <<endl;
            }
        }else {
//            女生
//            身高
            if(h < 129){
                cout << "duo chi yu!" <<" ";
            }else if(h == 129){
                cout <<"wan mei!"<<" ";
            }else {
                cout <<"ni li hai!" <<" ";
            }
//           体重
            if(w < 25){
                cout << "duo chi rou!" <<endl;
            }else if(w == 25){
                cout <<"wan mei!"<<endl;
            }else {
                cout <<"shao chi rou!" <<endl;
            }

        }
    }
    return 0;
}