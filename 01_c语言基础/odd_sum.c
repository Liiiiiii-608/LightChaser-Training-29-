#include <stdio.h>

int main(){
    int i;
    int sum=0;
    for(i=1;i<=99;i+=2)  /*循环遍历1到100的奇数*/
    {
        sum=sum + i;  /*计算奇数和*/
    }
    printf("1~100的奇数和 = %d\n",sum);
    return 0;
}