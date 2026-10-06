#include<stdio.h>
int main()
{
    int age;
    int height;
    printf("請輸入年齡:");
    scanf("%d",&age);
    printf("請輸入身高:");
    scanf("%d",&height);
    if(age>=12)
    {
        if(height>=140)
        {
            printf("可");
        }
        else
        {
            printf("不可");
        }

    }
    else
    {
        printf("不可");
    }
    return 0;
}