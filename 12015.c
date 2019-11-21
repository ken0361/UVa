#include<stdio.h>
int main()
{
    int testcase, num[10], count=1;
    char str[10][100];

    scanf("%d", &testcase);
    while(testcase--)
    {
        int max=0;
        for(int i=0; i<10; i++)
        {
            scanf("%s", str[i]);
            scanf("%d", &num[i]);
            if(max<=num[i]) max=num[i];
        }
        printf("Case #%d:\n", count);
        for(int i=0; i<10; i++)
        {
            if(max==num[i]) printf("%s\n", str[i]);
        }
        count++;
    }

    return 0;
}
