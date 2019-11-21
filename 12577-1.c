#include<stdio.h>
int main()
{
    char str[6];
    int count=1;

    while(scanf("%s", str)!=EOF)
    {
        if(str[0]=='H') printf("Case %d: Hajj-e-Akbar\n", count++);
        else if (str[0]=='U') printf("Case %d: Hajj-e-Asghar\n", count++);
    }
    return 0;
}
