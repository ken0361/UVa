#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int N, L;

    scanf("%d", &N);
    while(N--)
    {
        scanf("%d", &L);
        int num[51], cnt=0;
        for(int i=0; i<L; i++)
        {
            scanf("%d", &num[i]);
        }
        int time=L;
        while(time--)
        {
            for(int i=0; i<L-1; i++)
            {
                if(num[i]>num[i+1])
                {
                    swap(&num[i], &num[i+1]);
                    cnt++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", cnt);
    }

    return 0;
}

void swap(int *p, int *q)
{
    int tmp;

    tmp=*p;
    *p=*q;
    *q=tmp;
}
