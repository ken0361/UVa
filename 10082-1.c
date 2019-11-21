#include<stdio.h>
#include<string.h>
int main()
{
    char keyboard[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char input;
    while((input=getchar())!=EOF)
    {
        for(int i=0; i<strlen(keyboard); i++)
        {
            if(input==' '||input=='\n')
            {
                putchar(input);
                break;
            }
            else if(keyboard[i]==input)
            {
                putchar(keyboard[i-1]);
                break;
            }
        }
    }
    return 0;
}
