#include<stdio.h>
int mile(int a);
int juice(int b);

int main()
{
    int testcase, N, times, count=1;

    scanf("%d", &testcase);
    while(testcase--)
    {
        int milecost=0, juicecost=0;
        scanf("%d", &N);
        for(int i=0; i<N; i++)
        {
            scanf("%d", &times);
            milecost+=mile(times);
            juicecost+=juice(times);
        }
        if(milecost<juicecost) printf("Case %d: Mile %d\n", count, milecost);
        else if(milecost>juicecost) printf("Case %d: Juice %d\n", count, juicecost);
        else if(milecost==juicecost) printf("Case %d: Mile Juice %d\n", count, milecost);
        count++;
    }

    return 0;
}

int mile(int a)
{
    int cost=0;
    while(a>=0)
    {
        a-=30;
        cost+=10;
    }
    return cost;
}

int juice(int b)
{
    int cost=0;
    while(b>=0)
    {
        b-=60;
        cost+=15;
    }
    return cost;
}
