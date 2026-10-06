#include<stdio.h>
int main()
{
    int score;

    printf("請輸入成績(分)：");
    scanf("%d",&score);
    if(score>=60)
    {   int attend;
        printf("請輸入出席率(%)：");
        scanf("%d",&attend);
    
        if(attend>=80)
        {
            printf("課程通過");
        }
        else
        {
            printf("出席不及格");
        }

    }
    else
    {
        printf("成績不及格");
    }
    return 0;
}