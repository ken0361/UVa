#include<stdio.h>
int main()
{
    int N, num;
    int reason, treat, count=1;

    while(scanf("%d", &N)!=EOF)
    {
        if(N==0) break;
        reason=0;
        treat=0;
        for(int i=0; i<N; i++)
        {
            scanf("%d", &num);
            if(num==0) treat++;
            else reason++;
        }
        printf("Case %d: %d\n", count, reason-treat);
        count++;
    }
    return 0;
}
