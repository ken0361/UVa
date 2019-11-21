#include<stdio.h>
int length(int n);

int main()
{
    int input1, input2, hold, count=0, result=0;
    while(scanf("%d%d", &input1, &input2)!= EOF)
    {
        printf("%d %d ", input1, input2);
        if(input1>=input2)
        {
            hold=input1;
            input1=input2;
            input2=hold;
        }
        for(int i=input1; i<=input2; i++)
        {
            count=length(i);
            if(count>result) result=count;
        }
        printf("%d\n", result);
        result=0;
    }

    return 0;
}

int length(int n)
{
    int count=1;
    while(n!=1)
    {
        if(n%2==1) n=(3*n+1);
        else n=(n/2);
        count++;
    }
    return count;
}
