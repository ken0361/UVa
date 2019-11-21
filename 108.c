#include <stdio.h>
int main(void)
{
    int size, all[101][101], max=0, sum=0;

    scanf("%d", &size);
    for(int i=0; i<size; i++)
        for(int j=0; j<size; j++)
            scanf("%d", &all[i][j]);

    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            max+=all[i][j];

    int n=0; m=0;

    while(n<2&&m<1)
    {
        for(int i=n; i<n+2; i++)
            for(int j=m; j<m+3; j++)
            {
                sum+=all[i][j];
                if(sum>max) max=sum;
            }
        n++, m++;
    }
    while(n<2&&m<1)
    {
        for(int i=n; i<n+2; i++)
            for(int j=m; j<m+3; j++)
            {
                sum+=all[i][j];
                if(sum>max) max=sum;
            }
        n++, m++;
    }



    return 0;
}
