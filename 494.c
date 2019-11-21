#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];

    while(gets(str))
    {
        int word=0, cnt=0;
        for(int i=0; i<strlen(str); i++)
        {
            if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z') word=1;
            else
            {
                cnt+=word;
                word=0;
            }
        }
        cnt+=word;
        printf("%d\n", cnt);
    }

    return 0;
}
