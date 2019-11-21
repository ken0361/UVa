#include<stdio.h>
#include<string.h>
int main()
{
    int num, money, getnum, flag=0;
    char people[10][15], give[15], get[15];

    while(scanf("%d", &num)!=EOF)
    {
        int account[10]={0};
        for(int i=0; i<num; i++)
        {
            scanf("%s", people[i]);
        }
        for(int i=0; i<num; i++)
        {
            scanf("%s%d%d", give, &money, &getnum);
            for(int j=0; j<getnum; j++)
            {
                scanf("%s", get);
                for(int k=0; k<num; k++)
                {
                    if(strcmp(give, people[k])==0) account[k]-=(money/getnum);
                    if(strcmp(get, people[k])==0) account[k]+=(money/getnum);
                }
            }
        }
        if(flag==1) printf("\n");
        for(int i=0; i<num; i++)
        {
            printf("%s %d\n", people[i], account[i]);
        }
        flag=1;
    }
    return 0;
}
