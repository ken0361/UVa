#include<stdio.h>
int rook(int m, int n);
int knight(int m, int n);
int queen(int m, int n);
int king(int m, int n);

int main()
{
    int t, m, n;
    char chess;
    scanf("%d", &t);

    while(t--)
    {
        scanf(" %c%d%d", &chess, &m, &n);
        if(chess=='r') printf("%d\n", rook(m, n));
        else if(chess=='k') printf("%d\n", knight(m, n));
        else if(chess=='Q') printf("%d\n", queen(m, n));
        else if(chess=='K') printf("%d\n", king(m, n));
    }
    return 0;
}

int rook(int m, int n)
{
    return m<n? m:n;
}

int knight(int m, int n)
{
    return (m*n+1)/2;
}

int queen(int m, int n)
{
    return m<n? m:n;
}

int king(int m, int n)
{
    return ((m+1)/2)*((n+1)/2);
}
