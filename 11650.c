#include<stdio.h>
int main()
{
    int T, hr, min;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d%*c%d", &hr, &min);
        hr=11-hr+(min==0);
        if(hr<=0) hr+=12;
        if(min!=0) min=60-min;
        printf("%02d:%02d\n", hr, min);
    }
    return 0;
}
