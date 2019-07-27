//
// Created by longxing on 19-7-20.
//

#include <bits/stdc++.h>

using  namespace std;
//学生的信息
typedef  struct  stu{
    char  name[20];
    float score;
}STU;
bool cmp(STU a, STU b){
    if(a.score != b.score)
    return  a.score > b.score;
    return  strcmp(a.name,b.name) < 0;
}
int main(){
   int n,g, k , sum  =0;
    cin >> n >> g >> k;
    STU stu[n];
    for (int i = 0; i < n; ++i) {
        scanf("%s %f", stu[i].name, &stu[i].score);
        if(stu[i].score >= g)
            sum += 50;
        else if(stu[i].score >=60)
            sum += 20;

    }
   sort(stu, stu + n, cmp);

    cout<< sum<<endl;
    int c= 1 , ca = 0;
    for (int m = 0; m < k; ++m) {
       cout<<m + 1 << " " << stu[m].name << " " <<stu[m].score <<endl;
      while(stu[m + 1].score == stu[m].score){
          m++;
          cout<<c << " " << stu[m].name << " " <<stu[m].score <<endl;
          ca++;
      }
        c++;
        c += ca;
        ca = 0;
    }
    return  0;
}