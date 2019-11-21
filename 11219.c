#include<stdio.h>
int main()
{
    int testcase, num=1;
    int day1, day2, month1, month2, year1, year2; //1>current
    scanf("%d", &testcase);
    while(testcase--)
    {
        scanf("%d%*c%d%*c%d", &day1, &month1, &year1);
        scanf("%d%*c%d%*c%d", &day2, &month2, &year2);
        int year=year1-year2, month=month1-month2, day=day1-day2;
        if(day<0) month-=1;
        if(month<0) year-=1;

        printf("Case #%d: ", num++);
        if(year<0) printf("Invalid birth date\n");
        else if(year>130) printf("Check birth date\n");
        else if(year==0) printf("0\n");
        else printf("%d\n", year);
    }
    return 0;
}
