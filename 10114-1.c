#include<stdio.h>
int main()
{
    int month, T, time;
    double pay, loan, temprate, rate[100];

    while(scanf("%d%lf%lf%d", &month, &pay, &loan, &T)!=EOF)
    {
        if(month<=0||pay<=0||loan<=0) continue;
        for(int i=0; i<T; i++)
        {
            scanf("%d%lf", &time, &temprate);
            for(int k=time; k<=month; k++)
            {
                rate[k]=temprate;
            }
        }
        double FV=(pay+loan);
        double BV=loan;
        double monthpay=(loan/month);
        //printf("%lf %lf\n", FV, BV);
        for(int j=0; j<=month; j++)
        {
            FV=FV*(1-rate[j]);
            //printf("%d : %lf %lf\n", j, FV, BV);
            if(FV>=BV)
            {
                if(j==1) printf("%d month\n", j);
                else printf("%d months\n", j);
                break;
            }
            BV=BV-(loan/month);
        }
    }
    return 0;
}

