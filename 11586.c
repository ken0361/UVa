#include<stdio.h>
int main()
{
    int testcase;
    char piece[3];

    scanf("%d", &testcase);
    while(testcase--)
    {
        int startM=0, startF=0, endM=0, endF=0;

        while(scanf("%s", piece)!=EOF) //what the diff put here
        {
            //printf("%s\n", piece);
            if(piece[0]=='M') startM++;
            if(piece[0]=='F') startF++;
            if(piece[1]=='M') endM++;
            if(piece[1]=='F') endF++;
            if(getchar()=='\n') break;
        }
        //printf("startM:%d\nendF:%d\nendM:%d\nstartF:%d\n", startM, endF, endM, startF);
        if(startM==endF&&endM==startF&&startM+endM>1) printf("LOOP\n");
        else printf("NO LOOP\n");
    }

    return 0;
}
