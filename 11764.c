#include<stdio.h>
int main()
{
    int testcase, N, place, next, count=1;

    scanf("%d", &testcase);
    while(testcase--)
    {
        int up=0, down=0;
        scanf("%d", &N);
        scanf("%d", &place);
        for(int i=1; i<N; i++)
        {
            scanf("%d", &next);
            if(next>place) up++;
            if(next<place) down++;
            place=next;

        }
        printf("Case %d: %d %d\n", count, up, down);
        count++;
    }

    return 0;
}
