#include<stdio.h>
int main()
{
    int n, m, c, num, test=1;
    int esp[20];

    while(scanf("%d%d%d", &n, &m, &c)!=EOF&&n!=0&&m!=0&&c!=0)
    {
        int total=0, count[20]={0}, max=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &esp[i]);
        }
        for(int i=0; i<m; i++)
        {
            scanf("%d", &num);
            for(int j=0; j<n; j++)
            {
                if(num-1==j&&count[j]%2==0)
                {
                    total+=esp[j];
                    count[j]++;
                    //printf("%d:%d total:%d\n", j, count[j], total);
                }
                else if(num-1==j&&count[j]%2==1)
                {
                    total-=esp[j];
                    count[j]++;
                    //printf("%d:%d total:%d\n", j, count[j], total);
                }
                if(total>max) max=total;
            }
        }
        if(max>c) printf("Sequence %d\nFuse was blown.\n\n", test++);
        else if(max<=c) printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n", test++, max);
    }
    return 0;
}
