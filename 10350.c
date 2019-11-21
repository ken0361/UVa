#include<stdio.h>
#define max(a, b) (a>b? a:b)
#define min(a, b) (a<b? a:b)
int main()
{
    int guess, answer, low=1, high=10;;
    char respond[10];

    while(scanf("%d", &guess)&&guess!=0)
    {
        getchar();
        gets(respond);
        if(respond[0]=='r')
        {
            answer=guess;
            printf("%s\n", (answer>=low&&answer<=high)? "Stan may be honest":"Stan is dishonest");
            low=1, high=10;
        }
        else if(respond[4]=='h') high=min(guess-1, high);
        else if(respond[4]=='l') low=max(guess+1, low);
        //printf("H:%d L:%d\n", high, low);
    }
    return 0;
}
