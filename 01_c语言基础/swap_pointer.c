#include<stdio.h>

void swap(int *a, int*b)   /*void表示无返回值*/

{
    
    int t = *a;  /*引入临时变量t，用于储存a的值*/
    *a = *b;    /*此时a的值被b的值替换*/
    *b = t;     /*此时b的值被a的值替换*/
}

int main (void)   /*void表示无输入参数*/
{
    int a,b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);  /*调用swap函数，传递a和b的地址*/
    printf("%d %d", a, b);
    return 0;

}