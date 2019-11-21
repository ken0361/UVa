#include<stdio.h>
#include<stdlib.h>
int main()
{
    char sent[10000];
    int p=0;
    while(gets(sent))
    {
        for(int i=0; i<strlen(sent); i++)
        {
            if(sent[i]=='"')
            {
                if(p%2==0) printf("``");
                else printf("''");
                p++;
            }
            else printf("%c", sent[i]);
        }
        printf("\n");
    }
    return 0;
}
