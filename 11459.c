#include<stdio.h>
#define maxn 1005
int main()
{
    int t, p, num, rollnum, now[maxn];
    int from[101], to[101], roll[maxn];
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d%d", &p, &num, &rollnum);
        for(int i=0; i<p; i++) now[i]=1;
        for(int i=0; i<num; i++)
        {
            scanf("%d%d", &from[i], &to[i]);
        }
        for(int i=0; i<rollnum; i++) scanf("%d", &roll[i]);
        for(int i=0; i<rollnum; i++)
        {
            now[i%p]+=roll[i];
            for(int j=0; j<num; j++)
            {
                if(now[i%p]==from[j]) now[i]=to[j];
            }
            if(now[i%p]>=100)
            {
                now[i%p]=100;
                break;
            }
        }
        for(int i=0; i<p; i++) printf("Position of player %d is %d.\n", i+1, now[i]);
    }
    return 0;
}
