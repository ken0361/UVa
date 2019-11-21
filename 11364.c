#include<stdio.h>
int main()
{
    int t, n, hold;
    while(scanf("%d", &t)!=EOF)
    {
        for(int i=0; i<t; i++)
        {
            int minshop=99, maxshop=0;
            scanf("%d", &n);
            for(int j=0; j<n; j++)
            {
                scanf("%d", &hold);
                if(hold<minshop) minshop=hold;
                if(hold>maxshop) maxshop=hold;
            }
            printf("%d\n", 2*(maxshop-minshop));
        }
    }
    return 0;
}
