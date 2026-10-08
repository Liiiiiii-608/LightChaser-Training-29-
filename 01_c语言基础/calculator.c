#include <stdio.h>

int main(){
    double a;
    double b;
    double res=0;   /*防止res变成随机垃圾值*/
    char op;
    scanf("%lf %c %lf",&a,&op,&b);
    if(op == '+')
    {
        res=a+b;
    }
    else if(op == '-')
    {
        res = a-b;
    }
    else if(op == '*')
    {
        res = a*b;
    }
    else if(op == '/')
    {
        if(b == 0)
        {
            printf("除数不能为0!\n");  /*除数为0提示*/
            return 0;
        }
        res = a/b;
    }
    printf("结果 = %lf\n",res);
    return 0;
}