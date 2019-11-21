#include<stdio.h>
#include<string.h>
int main()
{
    const char keyboard[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char input[100];
    while(gets(input))
    {
        for(int i=0; i<strlen(input); i++)
        {
            if(input[i]==' ') printf(" ");
            else
            {
                for(int j=0; j<strlen(keyboard); j++)
                {
                    if(input[i]==keyboard[j]) printf("%c", keyboard[j-1]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
