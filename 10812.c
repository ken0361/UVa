#include <stdio.h>
int main(void)
{
    int t, sum, sub, n1, n2;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &sum, &sub);
        n1=(sum+sub)/2;
        n2=(sum-sub)/2;
        if((sum+sub)%2||(sum-sub)%2||n1<0||n2<0)
            printf("impossible\n");
        else printf("%d %d\n", n1, n2);
    }
    return 0;
}
