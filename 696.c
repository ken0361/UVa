#include<stdio.h>
int main()
{
    int m, n, num;

    while(scanf("%d%d", &m, &n))
    {
        if(m==0&n==0) break;
        if(m==1) num=n;
        else if(n==1) num=m;
        else if(m==2) num=((n+2)/4)*4+(n%4==1? 2:0);
        else if(n==2) num=((m+2)/4)*4+(m%4==1? 2:0);
        else num=(m*n+1)/2;
        printf("%d knights may be placed on a %d row %d column board.\n", num, m, n);
    }
    return 0;
}
