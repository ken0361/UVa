#include<stdio.h>
int main(void)
{
    int t, a, b;

    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int sum=0;
        scanf("%d%d", &a, &b);
        for(int j=a; j<=b; j++)
        {
            if(j%2==1) sum+=j;
        }
        printf("Case %d: %d\n", i+1, sum);
    }

    return 0;
}
