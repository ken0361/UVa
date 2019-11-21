#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t1, t2;

    while(scanf("%d%d", &t1, &t2)&&t1!=-1&&t2!=-1)
    {
        printf("%d\n", abs(t1-t2)>50? 100-abs(t1-t2) : abs(t1-t2));
    }

    return 0;
}
