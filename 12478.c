#include<stdio.h>

int main()
{
    int numRAKIBUL=0;
    char grid[9][9]={{"O, B, I, D, A, I, B, K, R"},
                     {"R, K, A, U, L, H, I, S, P"},
                     {"S, A, D, I, Y, A, N, N, O"},
                     {"H, E, I, S, A, W, H, I, A"},
                     {"I, R, A, K, I, B, U, L, S"},
                     {"M, F, B, I, N, T, R, N, O"},
                     {"U, T, O, Y, Z, I, F, A, H"},
                     {"L, E, B, S, Y, N, U, N, E"},
                     {"E, M, O, T, I, O, N, A, L"}};

    for(int i=0; i<9; i++)
    {
        int RAKIBUL=0;
        for(int j=0; j<9; j++)
        {
            if(grid[i][j]=='R'||'A'||'K'||'I'||'B'||'U'||'L') RAKIBUL++;
        }
        if(RAKIBUL>=7) numRAKIBUL+=1;
    }
    printf("%d", numRAKIBUL);
    return 0;
}
