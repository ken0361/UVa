#include<stdio.h>
int main()
{
    int testcase, N, num, act[100];
    char str[100][50], as[5];

    scanf("%d", &testcase);
    while(testcase--)
    {
        int place=0;
        scanf("%d", &N);
        for(int i=0; i<N; i++)
        {
            scanf("%s", str[i]);
            if(str[i][0]=='L')
            {
                act[i]=-1;
                place+=act[i];
            }
            else if(str[i][0]=='R')
            {
                act[i]=1;
                place+=act[i];
            }
            else
            {
                scanf("%s%d", as, &num);
                for(int j=0; j<i; j++)
                {
                    if(num==j+1)
                    {
                        act[i]=act[j];
                        place+=act[i];
                    }
                }
            }
            //printf("now: %d\n", place);
        }
        printf("%d\n", place);
    }

    return 0;
}
