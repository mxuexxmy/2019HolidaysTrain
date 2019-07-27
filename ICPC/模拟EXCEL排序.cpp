//
// Created by longxing on 19-7-18.
//

#include <bits/stdc++.h>
using namespace std;
typedef  struct  STU{
    int no; //学号
    string name; // 姓名
    int score; //成绩
};
bool cmpno(STU a, STU b){
    return  a.no < b.no;
}

bool cmpname(STU a, STU b){
    //return  a.name.compare(b) < 0;
    return  a.name < b.name;
}

bool  cmpscore(STU a, STU b){
    if(a.score == b.score) return  a.no < b.no;
    if(a.name == b.name) return  a.no < b.no;
    return  a.score < b.score;

}
int main(){
    int n, c;
    cin >> n >> c;
    STU stu[n];
    for (int i = 0; i <n ; ++i) {
        cin >> stu[i].no >> stu[i].name >> stu[i].score;
    }
    if(c == 1) {
        sort(stu, stu + n, cmpno);
    } else if(c == 2){
        sort(stu, stu + n, cmpname);
    } else {
        sort(stu, stu + n, cmpscore);
    }
    for (int j = 0; j < n; ++j) {
        printf("%06d", stu[j].no);
        cout <<" "<< stu[j].name << " "<<stu[j].score <<endl;
    }
    return  0;
}