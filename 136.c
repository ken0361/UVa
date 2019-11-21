#include <stdio.h>
#define min(x, y) (x<y? x:y)

int main(void)
{
    long long int num[1501];
    num[1]=1;
    int p2=1,p3=1,p5=1;

    for(int i=2; i<=1500; i++)
    {
        while(num[p2]*2 <= num[i-1]) p2++;
        while(num[p3]*3 <= num[i-1]) p3++;
        while(num[p5]*5 <= num[i-1]) p5++;
        num[i] = min(num[p2]*2, min(num[p3]*3, num[p5]*5));
    }

    printf("The 1500'th ugly number is %lld.\n", num[1500]);

    return 0;
}
