//
// Created by longxing on 19-7-18.
//

#include <cstdio>
#include <cstdlib>

//元素进栈
int push(int* a,int top , int x){
      a[++top]=x;
    return  top;
}

//元素出栈
int pop(int* a,int top){
    if(top == -1) {
        printf("空栈");
        return  -1;
    }
   printf("栈顶元素：%d\n", a[top]);
    top--;
    return  top;

}
int main(){
    int a[100] = {0};
    int top = -1;
    top  = push(a, top, 1);
    top = push(a , top, 2);
    top = push(a , top, 3);
    top = push(a , top, 4);
    top = pop(a, top);
    top = pop(a, top);
    top = pop(a, top);
    top = pop(a, top);
    top = pop(a, top);
    return  0;
}