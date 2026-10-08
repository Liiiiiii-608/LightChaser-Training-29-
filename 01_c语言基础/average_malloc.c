#include <stdio.h>
#include <stdlib.h> //malloc函数需要包含stdlib.h头文件

int main(void) 
{
    int n;
    int *arr;
    int sum = 0;
    double avg;

    printf("请输入数字的个数："); //动态分配n个int大小的内存
    if (scanf("%d",&n) !=  1) return 1;  //判断内存是否申请成功
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("内存分配失败！\n");
        return 1;
    }
for(int i = 0; i < n; i++)
{
    printf("请输入第%d个数字:", i+1);
    scanf("%d", &arr[i]);
    sum += arr[i]; //计算总和
}
avg = (double)sum / n;  //计算平均值，防止整数除法 
printf("平均值=%.2f\n", avg);
free(arr); //释放动态分配的内存
arr = NULL;
return 0;

}