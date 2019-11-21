#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num[3001];
    int N, diff;

    while(scanf("%d", &N)!=EOF)
    {
        int ok=1, check[3001]={0};
        scanf("%d", &num[0]);
        for(int i=1; i<N; i++)
        {
            scanf("%d", &num[i]);
            diff=abs(num[i]-num[i-1]);
            if(diff<=3000) check[diff]++;
        }
        for(int i=1; i<N; i++)
        {
            if(check[i]!=1)
            {
                ok=0;
                break;
            }
        }
        if(ok) printf("Jolly\n");
        else printf("Not jolly\n");
    }

    return 0;
}
