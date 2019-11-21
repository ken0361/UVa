#include<stdio.h>
#include<string.h>
int main()
{
    char str[6];
    int count=1;
    while(scanf("%s", str)!=EOF)
    {
        if(strcmp(str, "*")==0) break;
        if(strcmp(str, "Hajj")==0) printf("Case %d: Hajj-e-Akbar\n", count);
        if(strcmp(str, "Umrah")==0) printf("Case %d: Hajj-e-Asghar\n", count);
        count++;
    }

    return 0;
}
