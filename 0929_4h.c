#include <stdio.h>
int main()
{
    int laboratary=1;
    int laburatary=1<<2;
    int parkingspace=1<<3;
    int office=8;
    int student=5;

    printf("停車場的權限：%d\n",parkingspace);
    printf("學生有無停車場權限：%d\n",student&parkingspace);
    printf("學生有無老師辦公室權限：%d\n",student&office);

    return 0;


}