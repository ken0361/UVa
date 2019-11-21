#include<stdio.h>
int main()
{
    int test, farmer;
    int farm, value, burden=0;

    scanf("%d", &test);
    while(test--)
    {
        scanf("%d", &farmer);
        for(int i=0; i<farmer; i++)
        {
            scanf("%d%*d%d", &farm, &value);
            burden+=farm*value;
        }
        printf("%d\n", burden);
        burden=0;
    }
    return 0;
}
