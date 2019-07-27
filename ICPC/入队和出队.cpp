//
// Created by longxing on 19-7-18.
//

#include <bits/stdc++.h>
using  namespace std;
//入队
int enQueue(int* a, int rear ,int data){
       a[rear] = data;
       rear++;
       return  rear;
}

//出队
int deQueue(int* a, int front , int rear){
     while(front != rear){
         printf("出队元素：%d\n", a[front]);
         front++;
     }
}
int  main(){
    int a[100];
    int front , rear;
    front = rear = 0;
    //入队
    rear =enQueue(a, rear, 1);
    rear =enQueue(a, rear, 2);
    rear =enQueue(a, rear, 3);
    rear =enQueue(a, rear, 4);
    deQueue(a,front,rear);
    return  0;
}