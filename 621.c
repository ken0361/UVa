#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int t;
    int n;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", str);
        n=strlen(str);
        if(strcmp(str, "1")==0||
           strcmp(str, "4")==0||
           strcmp(str, "78")==0) printf("+\n");
        else if(str[n-2]=='3'&&str[n-1]=='5') printf("-\n");
        else if(str[0]=='9'&&str[n-1]=='4') printf("*\n");
        else if(str[0]=='1'&&str[1]=='9'&&str[2]=='0') printf("?\n");
    }

    return 0;
}
