#include<stdio.h>
int main()
{
    int day;
    printf("請輸入星期(1-7):");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("週一");
        break;
        case 2:
        printf("週二");
        break;
        case 3:
        printf("週三");
        break;
        default:
        printf("輸入錯誤");
    }

    return 0;
}