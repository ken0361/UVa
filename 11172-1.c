#include<stdio.h>
int main()
{
    int num, a, b;
    do{scanf("%d", &num);}while(num>=15);
    for(int i=0; i<num; i++)
    {
    scanf("%d%d", &a, &b);
    if(a>b) printf(">\n");
    else if(a<b) printf("<\n");
    else printf("=\n");
    }

    return 0;
}
