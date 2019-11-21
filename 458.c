#include<stdio.h>
#include<string.h>
int main(void)
{
    const int diff = (int)('*'-'1');
    char str[200];

    while(scanf("%s", str)!=EOF)
    {
        for(int i=0; i<strlen(str); i++) str[i]=str[i]+diff;
        printf("%s\n", str);
    }
    return 0;
}
