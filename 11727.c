#include<stdio.h>
int main()
{
    int T;
    int a, b, c;
    do{scanf("%d", &T);}while(T>=20);

    for(int i=0; i<T; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        printf("Case %d: ", i+1);
        if((a>b&&a<c)||(a>c&&a<b)) printf("%d\n", a);
        if((b>a&&b<c)||(b>c&&b<a)) printf("%d\n", b);
        if((c>a&&c<b)||(c>b&&c<a)) printf("%d\n", c);
    }

    return 0;
}
