#include<stdio.h>
int main()
{
    int t, num;
    int result;
    char str[10];
    while(scanf("%d", &t)!=EOF)
    {
        for(int i=0; i<t; i++)
        {
            scanf("%d", &num);
            result=(num*567/9+7492)*235/47-498;
            sprintf(str, "%d", result);
            for(int j=0; j<10; j++)
            {
                if(str[j]=='\0')
                {
                    printf("%c\n", str[j-2]);
                    break;
                }
            }
        }
    }

    return 0;
}
