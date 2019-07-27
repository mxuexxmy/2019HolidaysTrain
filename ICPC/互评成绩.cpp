//
// Created by longxing on 19-7-18.
//

#include <bits/stdc++.h>
using namespace std;
int main(){
    float score[10010];
    int n , k ,m ;
    cin >> n >> k >> m;

    for (int i = 0; i < n; ++i) {
        float sum = 0, stu[10] = {0};
        for (int j = 0; j < k ; ++j) {
            cin >> stu[j];
            sum += stu[j];
        }
        sort(stu, stu + k);
        sum = sum - (stu[0] + stu[k -1]);
        score[i] = sum / (k- 2);
       // cout << score[i] <<endl;
    }

    sort(score, score + n);

    for(int i = n - m ; i < n; i++){
        if(i < n - 1)
        printf("%.3f ",score[i]);
        else
            printf("%.3f\n",score[i]);
    }

    return  0;
}