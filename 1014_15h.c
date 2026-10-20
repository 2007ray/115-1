#include <stdio.h>
int main()
{
int money;
int total =0 ;
do
{
 printf("請輸入提款金額:");
 scanf("%d",&money);
 total +=money ;
}
while(money != 0);
printf("提款總金額:%d元",total);
    return 0;
}