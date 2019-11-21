#include<stdio.h>
int main()
{
    int testcase, next, base;

    scanf("%d", &testcase);
    printf("Lumberjacks:\n");
    while(testcase--)
    {
        int count=0, minus=0, plus=0;
        scanf("%d", &base);
        for(int i=1; i<10; i++)
        {
            scanf("%d", &next);
            if(base-next>=0) minus++;
            if(base-next<=0) plus++;
            base=next;
            count++;
        }
        if(count==minus||count==plus) printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
