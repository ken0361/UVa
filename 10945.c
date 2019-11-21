#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char temp[100], str[100];

    while(gets(temp)&&strcmp(temp, "DONE")!=0)
    {
        for(int i=0, j=0; i<strlen(temp); i++)
        {
            if(temp[i]!=' '&&temp[i]!=','&&temp[i]!='.'&&temp[i]!='!'&&temp[i]!='?')
            {
                str[j++]=tolower(temp[i]);
                str[j+1]='\0';
            }
        }

        strcpy(temp, str);

        if(strcmp(str, strrev(temp))==0) printf("You won't be eaten!\n");
        else printf("Uh oh..\n");

        //printf("str:%s\ntemp:%s\n", str, temp);
    }
    return 0;
}
