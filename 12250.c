#include<stdio.h>
#include<string.h>
int main()
{
    char str[13];
    int count=1;
    while(1)
    {
    scanf("%s", str);
    if(strcmp(str, "#")==0) break;
    else if(strcmp(str, "HELLO")==0) printf("Case %d: ENGLISH\n", count);
    else if(strcmp(str, "HOLA")==0) printf("Case %d: SPANISH\n", count);
    else if(strcmp(str, "HALLO")==0) printf("Case %d: GERMAN\n", count);
    else if(strcmp(str, "BONJOUR")==0) printf("Case %d: FRENCH\n", count);
    else if(strcmp(str, "CIAO")==0) printf("Case %d: ITALIAN\n", count);
    else if(strcmp(str, "ZDRAVSTVUJTE")==0) printf("Case %d: RUSSIAN\n", count);
    else printf("Case %d: UNKNOWN\n", count);
    count++;
    }

    return 0;
}
