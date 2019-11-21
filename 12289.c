#include<stdio.h>
#include<string.h>
int main()
{
    char str[6];
    int N;

    while(scanf("%d", &N)!=EOF)
    {
        for(int i=0; i<N; i++)
        {
            scanf("%s", str);
            if(strlen(str)==5) printf("3\n");
            else if((str[0]=='o'&&str[1]=='n')||
                    (str[1]=='n'&&str[2]=='e')||
                    (str[0]=='o'&&str[2]=='e')) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}
