#include<stdio.h>
int main()
{
    int K, N, M, X, Y;
    do
    {
        do{scanf("%d", &K);}while(K<0&&K>1000);
        if(K==0) break;
        do{scanf("%d%d", &N, &M);}while(-10000>N||N>10000||-10000>M||M>10000);
        for(int i=0; i<K; i++)
        {
        do{scanf("%d%d", &X, &Y);}while(-10000>X||X>10000||-10000>Y||Y>10000);
        if(X==N||Y==M) printf("divisa\n");
        else if(X>N&&Y>M) printf("NE\n");
        else if(X<N&&Y<M) printf("SO\n");
        else if(X>N&&Y<M) printf("SE\n");
        else printf("NO\n");
        }
    }while(K!=0);

    return 0;
}
