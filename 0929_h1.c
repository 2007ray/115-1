#include <stdio.h>
int main()
{
    float x;
    float y;
    printf("請輸入一個三角形的底:");
    scanf("%f",&x);
    printf("請輸入一個三角形的高:");
    scanf("%f",&y);
    printf("你輸入的三角形面積為:%.2f",x*y/2);
    return 0;


}