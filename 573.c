#include<stdio.h>
int main()
{
    double H, U, D, F;
    int day=1;
    double place=0;

    while(scanf("%lf%lf%lf%lf", &H, &U, &D, &F)!=EOF&&H!=0)
    {
        while(1)
        {
            if(U>U*(F/100)*(day-1)) place=place+U-U*(F/100)*(day-1);
            else if (U<=U*(F/100)*(day-1)) place=place+0;
            if(place>H)
            {
                printf("success on day %d\n", day);
                break;
            }
            place-=D;
            if(place<0)
            {
                printf("failure on day %d\n", day);
                break;
            }
            //printf("%d : %lf\n", day, place);
            day++;
        }
        day=1;
        place=0;
    }
    return 0;
}
