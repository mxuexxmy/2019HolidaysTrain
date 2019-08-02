#include<bits/stdc++.h>
using namespace std;
int a[110][110]={0};
int main(){
   int n, m;
   cin >> n >> m;

   for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        cin >> a[i][j];
    }
   }
    int sum =0, flag = 1;
  for(int i = 1; i <= n; i++ )    sum+=i;
  for(int i = 0; i < n; i++){
        int cnt = 0, k = a[n - m - 1][i];
     for(int j = m ; j < n; j++){
           cnt++;
           a[j][i] = (k + cnt) <= n? (k + cnt) : (k + cnt) % (n + 1) + 1;
           //a[j][i] = (k + cnt) % (n + 1);
      }
   }


   for(int i = 0; i < m; i++){
       int sum1 = 0, sum 2 = 0;
    for(int j = 0; j < n; j++){
        sum1 +=a[i][j];
        sum2 +=a[j][i];
    }

    if(sum1 != sum || sum2 != sum){
        flag = 0;
        break;
    }
   }

   if(flag){
      printf("yes\n");
      for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        cout << a[i][j] << " ";
       }
       cout <<endl;
    }
   }else{
      printf("no\n");
   }
  return 0;
}
