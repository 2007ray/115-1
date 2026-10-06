#include<stdio.h>
int main()
{
    int login; 
    int buget;
    int cost;
    int black;
    printf("請輸入登入狀態（1：已登入，0：未登入）：");
    scanf("%d",&login);
    if(login ==1)
    {printf("請輸入帳戶餘額：");
    scanf("%d",&buget);
    printf("請輸入提款金額：");
    scanf("%d",&cost);
    printf("請輸入黑名單狀態（1：是，0：否）：");
    scanf("%d",&black);
    if(buget>=cost&&black==0)
    {
        printf("可以提款");
    }else{
        printf("無法提款");
    }
    }
    else
    {
        printf("無法提款");
    }
    return 0;
}