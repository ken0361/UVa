#include<stdio.h>
#include<math.h>
int main()
{
    double hr, min;
    double anglehr, anglemin;

    while(scanf("%lf%*c%lf", &hr, &min)!=EOF)
    {
        if(hr==0&&min==00) break;
        if(hr==12) hr=0;
        anglemin=min*6;
        anglehr=hr*30+min/2;
        printf("%.3lf\n", fabs(anglehr-anglemin)<180? fabs(anglehr-anglemin):360-fabs(anglehr-anglemin));
    }

    return 0;
}
