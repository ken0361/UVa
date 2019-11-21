#include<stdio.h>
#include<stdlib.h>
int main()
{
    int testcase, gap;
    int W, y1, y2;

    scanf("%d", &testcase);
    //printf("\n");

    while(testcase--)
    {
        int count=0;
        scanf("%d", &W);
        for(int i=0; i<W; i++)
        {
            scanf("%d%d", &y1, &y2);
            if(i==0) gap=abs(y1-y2);
            else if(gap==abs(y1-y2)) count++;
        }
        //printf("%d%d\n", count, W);
        printf("%s\n", count==W-1? "yes" : "no");
        if(testcase!=0) printf("\n");
    }
    return 0;
}
