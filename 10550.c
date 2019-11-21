#include<stdio.h>
int main()
{
    int p, a, b, c;
    int j; //p~a
    int k; //a~b
    int l; //b~c
    int total;
    while(scanf("%d%d%d%d",&p, &a, &b, &c)!=EOF)
    {
        if(p==0&&a==0&&b==0&&c==0) break;
        if(p<a) j=p+(40-a);
        else j=p-a;
        if(a<b) k=b-a;
        else k=40-a+b;
        if(b<c) l=b+(40-c);
        else l=b-c;
        total=1080+9*(j+k+l);
        printf("%d\n", total);
    }
    return 0;
}
