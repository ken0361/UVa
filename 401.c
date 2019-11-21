#include<stdio.h>
#include<string.h>
//int mirror(char input);

int main()
{
    int flag;
    char input[100];

    while(scanf("%s", input)!=EOF)
    {
        flag=0;
        char *rev=strrev(input);
        if(strcmp(rev, input)==0) flag+=10;
        //if(mirror(input)==0) flag+=1;
        if(flag==11) printf("%s -- is a mirrored palindrome.\n", input);
        else if(flag==1) printf("%s -- is a mirrored string.\n", input);
        else if(flag==10) printf("%s -- is a regular palindrome.\n", input);
        else printf("%s -- is not a palindrome.\n", input);
    }
    return 0;
}

/*int mirror(char input)
{
    int len=strlen(input), flag=0;
    char rev[100];
    strcpy(rev, strrev(input));
    for(int i=0; i<len; i++)
    {
        if(input[i]!='A'||'E'||'H'||'I'||'J'||
                     'L'||'M'||'O'||'S'||'T'||
                     'U'||'V'||'W'||'X'||'Y'||
                     'Z'||'1'||'2'||'3'||'5'||'8') break;
        if(input[i]=='A'&&rev[i]=='A') flag++;
        else if(input[i]=='E'&&rev[i]=='3') flag++;
        else if(input[i]=='H'&&rev[i]=='H') flag++;
        else if(input[i]=='I'&&rev[i]=='I') flag++;
        else if(input[i]=='J'&&rev[i]=='L') flag++;
        else if(input[i]=='L'&&rev[i]=='J') flag++;
        else if(input[i]=='M'&&rev[i]=='M') flag++;
        else if(input[i]=='O'&&rev[i]=='O') flag++;
        else if(input[i]=='S'&&rev[i]=='2') flag++;
        else if(input[i]=='T'&&rev[i]=='T') flag++;
        else if(input[i]=='U'&&rev[i]=='U') flag++;
        else if(input[i]=='V'&&rev[i]=='V') flag++;
        else if(input[i]=='W'&&rev[i]=='W') flag++;
        else if(input[i]=='X'&&rev[i]=='X') flag++;
        else if(input[i]=='Y'&&rev[i]=='Y') flag++;
        else if(input[i]=='Z'&&rev[i]=='5') flag++;
        else if(input[i]=='1'&&rev[i]=='1') flag++;
        else if(input[i]=='2'&&rev[i]=='S') flag++;
        else if(input[i]=='3'&&rev[i]=='E') flag++;
        else if(input[i]=='5'&&rev[i]=='Z') flag++;
        else if(input[i]=='8'&&rev[i]=='8') flag++;
    }
    return flag==len? 0:1;
}*/
