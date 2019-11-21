#include <stdio.h>
int main(void)
{
    int t, a, f;

    scanf("%d", &t);

    for(int k=0; k<t; k++)
    {
        scanf("%d%d", &a, &f);
        if(k) printf("\n");
        while(f--)
        {
            for(int i=1; i<=a; i++)
            {
                for(int j=0; j<i; j++) printf("%d", i);
                printf("\n");
            }
            for(int i=a-1; i>=1; i--)
            {
                for(int j=i; j>0; j--) printf("%d", i);
                printf("\n");
            }
            if(f) printf("\n");
        }
    }

    return 0;
}
