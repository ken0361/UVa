#include<stdio.h>
int main()
{
    char sent;
    int p=0;
    while(scanf("%c", &sent)!=EOF)
    {
        if(sent=='"')
        {
            if(p%2==0) printf("``");
            else printf("''");
            p++;
        }
        else printf("%c", sent);
    }
    return 0;
}
