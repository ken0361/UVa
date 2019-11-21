#include<stdio.h>
#define maxn 1005
int main()
{
    int num, game=1;
    int ans[maxn], guess[maxn];

    while(scanf("%d", &num)&&num)
    {
        printf("Game %d:\n", game++);
        for(int i=0; i<num; i++) scanf("%d", &ans[i]);
        while(1)
        {
            int a=0, b=0;
            for(int i=0; i<num; i++)
            {
                scanf("%d", &guess[i]);
                if(ans[i]==guess[i]) a++;
            }
            if(guess[0]==0) break;
            for(int i=1; i<10; i++)
            {
                int rnum1=0, rnum2=0;
                for(int j=0; j<num; j++)
                {
                    if(i==ans[j]) rnum1++;
                    if(i==guess[j]) rnum2++;
                }
                if(rnum1<rnum2) b+=rnum1;
                else b+=rnum2;
            }
            printf("    (%d,%d)\n", a, b-a);
        }
    }
    return 0;
}
