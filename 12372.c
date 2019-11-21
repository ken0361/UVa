#include<stdio.h>
int main()
{
    int T;
    int l, w, h;
    int count=1;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d%d%d", &l, &w, &h);
        if(l<=20&&w<=20&&h<=20) printf("Case %d: good\n", count);
        else printf("Case %d: bad\n", count);
        count++;
    }
    return 0;
}
