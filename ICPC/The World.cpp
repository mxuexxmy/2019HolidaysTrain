#include <bits/stdc++.h>
using namespace std;
int main(){
 int x,y;
 string s1, s2, s3;
 string A = "Beijing", B = "Washington", C ="London",D ="Moscow";
 int n;
 cin >> n;
 int cnt = 0;
 while(n--){
  char ch;
  scanf("%d%c%d",&x,&ch,&y);
  cin >> s1;
  getchar();
  cin >> s2;
  getchar();
  cin >> s3;
  int  k = x;
  cnt++;
  if(s2 == "Beijing"){
        if(s3 == "Beijing"){
             k = x;
        }else if(s3 == "London"){
             k -= 8;
        }else if(s3 == "Washington"){
             k += 3;
        }else if(s3 == "Moscow"){
             k += 11;
        }

          if(x == k){ //相等的时候
            printf("Case %d: Today %d:%02d ",cnt, x , y);
            cout << s1 <<endl;
        }else if( k  >= 0){
             if(x == 12 && s1 == "AM"){
                 printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
             }else if(x == 12 && s1 =="PM"){
               printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
             }else if(k >= 0 && k <= 12 && s1 == "AM"){
                   printf("Case %d: Today %d:%02d ",cnt, k , y);
                  cout << s1 <<endl;
             }else if(k > 12 && k <24 && s1 == "AM"){
                    printf("Case %d: Tomorrow %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }else if(k > 12 && k <24 && s1 == "PM"){
                    printf("Case %d: Tomorrow %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }

        }else if(k < 0){
             if(k < 0 && k >= - 12 && s1 == "AM"){
                   printf("Case %d: Yesterday %d:%02d ",cnt, k , y);
                  cout << s1 <<endl;
             }else if(k >= -12 && k <= -24 && s1 == "PM"){
                    printf("Case %d: Yesterday %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }
        }
  }else if(s2 == "Washington"){
       if(s3 == "Beijing"){
             k += 3;
        }else if(s3 == "London"){
             k += 5;
        }else if(s3 == "Washington"){
             k = x;
        }else if(s3 == "Moscow"){
             k -= 2;
        }

              if(x == k){ //相等的时候
            printf("Case %d: Today %d:%02d ",cnt, x , y);
            cout << s1 <<endl;
        }else if( k  >= 0){
             if(x == 12 && s1 == "AM"){
                 printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
             }else if(x == 12 && s1 =="PM"){
               printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
             }else if(k >= 0 && k <= 12 && s1 == "AM"){
                   printf("Case %d: Today %d:%02d ",cnt, k , y);
                  cout << s1 <<endl;
             }else if(k > 12 && k <24 && s1 == "AM"){
                    printf("Case %d: Tomorrow %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }else if(k > 12 && k <24 && s1 == "PM"){
                    printf("Case %d: Tomorrow %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }

        }else if(k < 0){
             if(k < 0 && k >= - 12 && s1 == "AM"){
                   printf("Case %d: Yesterday %d:%02d ",cnt, k , y);
                  cout << s1 <<endl;
             }else if(k >= -12 && k <= -24 && s1 == "PM"){
                    printf("Case %d: Yesterday %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }
        }
  }else if(s2 == "London"){
       if(s3 == "Beijing"){
             k += 8;
        }else if(s3 == "London"){
             k = x;
        }else if(s3 == "Washington"){
             k -= 5;
        }else if(s3 == "Moscow"){
             k += 3;
        }

                if(x == k){ //相等的时候
            printf("Case %d: Today %d:%02d ",cnt, x , y);
            cout << s1 <<endl;
        }else if( k  >= 0){
             if(x == 12 && s1 == "AM"){
                 printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
             }else if(x == 12 && s1 =="PM"){
               printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
             }else if(k >= 0 && k < 12 && s1 == "AM"){
                   printf("Case %d: Today %d:%02d ",cnt, k , y);
                  cout << s1 <<endl;
             }else if(k >= 12 && k <24 && s1 == "AM"){
                    printf("Case %d: Tomorrow %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }
        }else if(k < 0){
             if(k < 0 && k >= - 12 && s1 == "AM"){
                   printf("Case %d: Yesterday %d:%02d ",cnt, k , y);
                  cout << s1 <<endl;
             }else if(k >= -12 && k <= -24 && s1 == "PM"){
                    printf("Case %d: Yesterday %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }
        }

  }else if(s2 == "Moscow"){

       if(s3 == "Beijing"){
             k += 11;
        }else if(s3 == "London"){
             k -= 3;
        }else if(s3 == "Washington"){
             k -= 3;
        }else if(s3 == "Moscow"){
             k = x;
        }

             if(x == k){ //相等的时候
            printf("Case %d: Today %d:%02d ",cnt, x , y);
            cout << s1 <<endl;
        }else if( k  >= 0){
             if(x == 12 && s1 == "AM"){
                 printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
             }else if(x == 12 && s1 =="PM"){
               printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
             }else if(k >= 0 && k <= 12 && s1 == "AM"){
                   printf("Case %d: Today %d:%02d ",cnt, k , y);
                  cout << s1 <<endl;
             }else if(k > 12 && k <24 && s1 == "AM"){
                    printf("Case %d: Tomorrow %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }else if(k > 12 && k <24 && s1 == "PM"){
                    printf("Case %d: Tomorrow %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }

        }else if(k < 0){
             if(k < 0 && k >= - 12 && s1 == "AM"){
                   printf("Case %d: Yesterday %d:%02d ",cnt, k , y);
                  cout << s1 <<endl;
             }else if(k >= -12 && k <= -24 && s1 == "PM"){
                    printf("Case %d: Yesterday %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }
        }
  }
 }
 return 0;
}
