#include<stdio.h>
int main()
{
    int test, start, end, casenum=1;
    char num[1000000];
    while(gets(num))
    {
        int count=1;
        //printf("%s\n", num);
        scanf("%d", &test);
        printf("Case %d:\n", casenum++);
        for(int i=0; i<test; i++)
        {
            scanf("%d%d", &start, &end);
            if(start>end)
            {
                int temp=start;
                start=end;
                end=temp;
            }
            //printf("start:%d end:%d\n", start, end);
            for(int j=start; j<end; j++)
            {
                if(num[j]==num[j+1]) count=1;
                else
                {
                    count=0;
                    break;
                }
            }
            //printf("count:%d end-start:%d\n", count, end-start);
            if(count==1||start==end) printf("Yes\n");
            else printf("No\n");
        }
        getchar(); //scanf&gets problems
    }
    return 0;
}
