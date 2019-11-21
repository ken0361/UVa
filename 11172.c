#include<stdio.h>
int main()
{
    int num;
    do{scanf("%d", &num);}while(num>=15);
    int a[num], b[num];
    for(int i=0; i<num; i++)
    {
    scanf("%d%d", &a[i], &b[i]);
    }
    printf("\n");
    for(int i=0; i<num; i++)
    {
    if(a[i]>b[i]) printf(">\n");
    else if(a[i]<b[i]) printf("<\n");
    else printf("=\n");
    }
    return 0;
}
