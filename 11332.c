#include<stdio.h>
#include<string.h>
int main()
{
    int temp;
    char num[11]={};

    while(scanf("%s", num)&&strcmp(num, "0")!=0)
    {
        do
        {
            temp=0;
            for(int i=0; i<strlen(num); i++)
            {
                temp+=(num[i]-'0');
            }
            if(temp<10) printf("%d\n", temp);
            memset(num, '\0', 11);
            sprintf(num, "%d", temp);
        }while(temp>=10);
    }
    return 0;
}
