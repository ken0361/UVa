#include<stdio.h>
int main()
{
    int t;
    char command[10];

    while(scanf("%d", &t)&&t!=0)
    {
        int top=1, north=2, west=3, east=4, south=5, bottom=6, temp;
        while(t--)
        {
            scanf("%s", command);
            temp=top;
            if(command[0]=='n')
            {
                top=south;
                south=bottom;
                bottom=north;
                north=temp;
            }
            else if(command[0]=='e')
            {
                top=west;
                west=bottom;
                bottom=east;
                east=temp;
            }
            else if(command[0]=='s')
            {
                top=north;
                north=bottom;
                bottom=south;
                south=temp;
            }
            else if(command[0]=='w')
            {
                top=east;
                east=bottom;
                bottom=west;
                west=temp;
            }
        }
        printf("%d\n", top);
    }
    return 0;
}
