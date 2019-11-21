#include<stdio.h>
#include<string.h>
int main()
{
    char str[6];
    int N;

    scanf("%d", &N);

    while(N--)
    {
        scanf("%s", str);
        if(strlen(str)==5) printf("3\n");
        else
        {
            int count=0;
            if(str[0]=='o') count++;
            if(str[1]=='n') count++;
            if(str[2]=='e') count++;
            if(count>=2) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}
