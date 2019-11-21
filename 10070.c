#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int blank=0;
    char year[300000], temp[5];
    while(scanf("%s", year)!=EOF)
    {
        if(blank==1) printf("\n");
        blank=1;
        int count=0;
        strncpy(temp, year+strlen(year)-4, 4);
        int years=atoi(temp);
        if(years%400==0||(years%4==0&&years%100!=0))
        {
            printf("This is leap year.\n");
            count+=2;
        }
        int odd=0, even=0;
        for(int i=0; i<strlen(year); i++)
        {
            if(i%2==0) odd+=year[i]-'0';
            else even+=year[i]-'0';
        }
        if((odd+even)%3==0&&years%5==0)
        {
            printf("This is huluculu festival year.\n");
            count+=1;
        }
        if(abs(odd-even)%11==0&&years%5==0&&(count==2||count==3))
        {
            printf("This is bulukulu festival year.\n");
        }
        if(count==0) printf("This is an ordinary year.\n");
    }
    return 0;
}
