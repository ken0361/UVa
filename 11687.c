#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int digit;
    char input[1000000];

    while(scanf("%s", input)!=EOF&&strcmp(input, "END")!=0)
    {
        int count=1;
        while(1)
        {
            if(atoi(input)==1)
            {
                count=0;
                break;
            }
            digit=strlen(input);
            sprintf(input, "%d", digit);
            if(digit==1) break;
            count++;
        }
        printf("%d\n", count+1);
    }
    return 0;
}
