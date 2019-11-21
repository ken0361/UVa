#include <stdio.h>
int main(void)
{
    int C, N, score[1001];
    scanf("%d", &C);
    while(C--)
    {
        double sum=0;
        int cnt=0;
        scanf("%d", &N);
        for(int i=0; i<N; i++)
        {
            scanf("%d", &score[i]);
            sum+=score[i];
        }
        for(int i=0; i<N; i++)
        {
            if(sum/N<score[i]) cnt++;
        }
        printf("%.3f%%\n", (double)cnt*100/N);
    }
    return 0;
}
