#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t, num;
    int result;
    while(scanf("%d", &t)!=EOF)
    {
        for(int i=0; i<t; i++)
        {
            scanf("%d", &num);
            result=(num*567/9+7492)*235/47-498;
            printf("%d\n", abs((result/10)%10));
        }
    }
    return 0;
}
