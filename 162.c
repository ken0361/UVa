#include<stdio.h>
int main()
{
    char dealer[26][5], nondealer[26][5];

    for(int i=0; i<52; i++)
    {
        if(i%2==0) scanf("%s", &dealer[i/2]);
        else if(i%2==1) scanf("%s", &nondealer[(i-1)/2]);
    }
    if(dealer[0][1]=='J')

    return 0;
}
