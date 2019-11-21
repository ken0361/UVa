#include<stdio.h>
int main()
{
    int m, n, field=1, flag=0;

    while(scanf("%d%d", &m, &n)&&m!=0&&n!=0)
    {
        char mines[m][n+1];
        int num[m][n];
        for(int i=0; i<m; i++)
        {
            scanf("%s", mines[i]);
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                num[i][j]=0;
                if(mines[i][j]=='*') num[i][j]=10;
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(num[i][j]>=10)
                {
                    if(i+1<m&&j+1<n) num[i+1][j+1]+=1;
                    if(i>0&&j+1<n) num[i-1][j+1]+=1;
                    if(i+1<m&&j>0) num[i+1][j-1]+=1;
                    if(i>0&&j>0) num[i-1][j-1]+=1;
                    if(j+1<n) num[i][j+1]+=1;
                    if(j>0) num[i][j-1]+=1;
                    if(i+1<m) num[i+1][j]+=1;
                    if(i>0) num[i-1][j]+=1;
                }
            }
        }
        if(flag==1) printf("\n");
        flag=1;
        printf("Field #%d:\n", field++);
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(num[i][j]>=10) printf("*");
                else printf("%d", num[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
