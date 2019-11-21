#include<stdio.h>
int main()
{
    int num, budget, hotel, days, percost, room;

    while(scanf("%d%d%d%d", &num, &budget, &hotel, &days)!=EOF)
    {
        int cost=500000;
        for(int i=0; i<hotel; i++)
        {
            scanf("%d", &percost);
            int count=0;
            for(int j=0; j<days; j++)
            {
                scanf("%d", &room);
                if(room>=num) count++;
            }
            if(count>0&&cost>percost*num) cost=percost*num;
        }
        if(cost!=500000&&cost<=budget) printf("%d\n", cost);
        else printf("stay home\n");
    }
    return 0;
}
