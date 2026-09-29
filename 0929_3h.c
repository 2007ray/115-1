#include <stdio.h>
int main()
{
    int livigroom=9;
    int bedroom=5;
    int kitchen=0;
    int statuts=13;

    printf("目前客廳設備：%d\n",statuts&livigroom);
    printf("目前臥室設備：%d\n",statuts&bedroom);
    printf("目前廚房設備：%d\n",statuts&kitchen);
    printf("廚房切換後目前設備狀態:%d\n",statuts^kitchen);

    return 0;


}