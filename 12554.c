#include<stdio.h>
int main()
{
    int N;
    char str[100][100];
    char song[17][10]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%s", str[i]);
    }
    for(int i=0; i<16*(((N-1)/16)+1); i++)
    {
        printf("%s: %s\n", str[i%N], song[i%16]);
    }

    return 0;
}
