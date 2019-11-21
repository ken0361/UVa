#include<stdio.h>
int main()
{
    int testcase, num, speed, count=1;

    scanf("%d", &testcase);

    while(testcase--)
    {
        int max=0;
        scanf("%d", &num);
        for(int i=0; i<num; i++)
        {
            scanf("%d", &speed);
            if(speed>max) max=speed;
        }
        printf("Case %d: %d\n", count, max);
        count++;
    }
    return 0;
}
