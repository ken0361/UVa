#include <stdio.h>
int main(void)
{
    int a, b;

    while(scanf("%d%d", &a, &b)!=EOF&&(a||b))
    {
        int cnt=0;
        for(int i=10; i<=1000000000; i*=10)
        {
            if(a%i+b%i>=i) cnt++;
        }

        if(cnt==0) printf("No ");
        else printf("%d ", cnt);
        printf("carry operation%s.\n", cnt>1? "s":"");
    }

    return 0;
}
