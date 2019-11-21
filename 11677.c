#include<stdio.h>
int main()
{
    int hr1, hr2, min1, min2, time;

    while(scanf("%d%d%d%d", &hr1, &min1, &hr2, &min2)&&(hr1!=0||hr2!=0||min1!=0||min2!=0))
    {
        if(hr1==0) hr1=24;
        if(hr2==0) hr2=24;
        time=(hr2-hr1)*60+min2-min1;

        printf("%d\n", time>0? time:1440+time);
    }
    return 0;
}
