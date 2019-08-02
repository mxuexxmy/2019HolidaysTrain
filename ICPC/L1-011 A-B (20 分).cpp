

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
                    printf("Case %d: Today %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }else if(k > 12 && k <24 && s1 == "PM"){
                    printf("Case %d: Today %d:%02d ",cnt, k , y);
                      cout << s1 <<endl;
             }
        }


        if(x == k){ //相等的时候
            printf("Case %d: Today %d:%02d ",cnt, x , y);
            cout << s1 <<endl;
        }else if((k >= 0 && k < 12 && s1 == "AM") || (x == 12 && k >=12 && k < 24 && s1 =="AM")){
            //早上
            if(k ==  12)
                 printf("Case %d: Today %d:%02d ",cnt, k , y);
            else
                 printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
        }else if((k >= 12 && k < 24 && s1 == "PM") || (x == 12 && k >=0 && k < 12 && s1 =="PM")){
            //下午
         if(k ==  12)
                 printf("Case %d: Today %d:%02d ",cnt, k , y);
            else
                 printf("Case %d: Today %d:%02d ",cnt, k % 12, y);
                  cout << s1 <<endl;
        }else if( k >= 12 && k <= 24){
            //明天
            s1 =  "AM";
            if(k == 12){
             printf("Case %d: Tomorrow %d:%02d ",cnt, k , y);
             cout << s1 <<endl;
            }else{
             printf("Case %d: Tomorrow %d:%02d ",cnt, k % 12, y);
             cout << s1 <<endl;
            }

        }else if( k < 0&& k >= -12){
            //昨天

            s1 =  "PM";
            printf("Case %d: Yesterday %d:%02d ",cnt, (k + 12)% 12 , y);
             cout << s1 <<endl;
        }

