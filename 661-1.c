#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n, m, c, num, test=1;
    int esp[20];

    while(scanf("%d%d%d", &n, &m, &c)!=EOF&&n!=0&&m!=0&&c!=0)
    {
        int total=0, max=0;
        bool on[20]={false};
        for(int i=0; i<n; i++)
        {
            scanf("%d", &esp[i]);
        }
        for(int i=0; i<m; i++)
        {
            scanf("%d", &num);
            if(on[num-1]) total-=esp[num-1];
            else total+=esp[num-1];
            on[num-1]=!on[num-1];
            if(total>max) max=total;
        }
        if(max>c) printf("Sequence %d\nFuse was blown.\n\n", test++);
        else if(max<=c) printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n", test++, max);
    }
    return 0;
}

