#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int roadlen;
    char place[2000000];

    while(scanf("%d", &roadlen)&&roadlen!=0)
    {
        int min=2000000, rplace=2000000, dplace=-2000000;
        scanf("%s", place);
        for(int i=0; i<strlen(place); i++)
        {
            if(place[i]=='Z')
            {
                min=0;
                break;
            }
            else if(place[i]=='R') rplace=i;
            else if(place[i]=='D') dplace=i;
            if(min>abs(rplace-dplace)&&(rplace>0||dplace>0)) min=abs(rplace-dplace);
        }
        printf("%d\n", min);
    }
    return 0;
}
