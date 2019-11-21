#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    char str[7];
    int money;
    int amount=0;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%s", str);
        if(strcmp(str, "report")==0) printf("%d\n", amount);
        if(strcmp(str, "donate")==0)
        {
            scanf("%d\n", &money);
            amount+=money;
        }
    }
    return 0;
}
