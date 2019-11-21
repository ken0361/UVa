#include<stdio.h>
int main()
{
    int B, N;
    int R[20];
    int give, get, amount;

    while(scanf("%d%d", &B, &N)&&B!=0&&N!=0)
    {
        int count=0;
        for(int i=1; i<=B; i++)
        {
            scanf("%d", &R[i]);
        }
        for(int i=0; i<N; i++)
        {
            scanf("%d%d%d", &give, &get, &amount);
            R[give]-=amount;
            R[get]+=amount;
        }
        for(int i=1; i<=B; i++)
        {
            if(R[i]>=0) count++;
        }
        if(count==B) printf("S\n");
        else printf("N\n");
    }

    return 0;
}
