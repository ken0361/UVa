#include<stdio.h>
int main(void)
{
    int n, h[101], cnt=1;

    while(scanf("%d", &n)!=EOF&&n)
    {
        int sum=0, dif=0;

        for(int i=0; i<n; i++)
        {
         scanf("%d", &h[i]);
         sum+=h[i];
        }

        for(int i=0; i<n; i++) if(h[i]>sum/n) dif+=(h[i]-sum/n);

        printf("Set #%d\nThe minimum number of moves is %d.\n\n", cnt++, dif);
    }
    return 0;
}
