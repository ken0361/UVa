#include<stdio.h>
#include<string.h>
int main()
{
    int n, p, num;
    double price;
    char list[1000][80], sale[1000][80], company[10][20];

    while(scanf("%d%d", &n, &p)!=EOF&&n!=0&&p!=0)
    {
        for(int i=0; i<n; i++)
        {
            gets(list[i]);
        }
        for(int i=0; i<n; i++)
        {
            scanf("%s", company[i]);
            scanf("%lf%d", &price, &num);
            for(int j=0; j<num; j++)
            {
                gets(sale[i]);
            }
        }

    }

    return 0;
}
