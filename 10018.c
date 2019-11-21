#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int pa(char num);

int main(){
    char num[10], temp[10];
    int t;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", temp);
        strcpy(num, temp);
        if(strcmp(num, strrev(temp))==0) printf("1 %s\n", strrev(num));
        else printf("%d\n", pa(num));
    }
    return 0;
}

int pa(char num)
{
    int flag=0;
    char temp[10];
    char n[10];
    strcpy(temp, num);
    int sum=atoi(strrev(temp))+atoi(num);

    sprintf(n, "%d", sum);
    strcpy(temp, n);

    if(strcmp(strrev(temp), n)==0) flag=1;

    return flag==1? atoi(n):pa(n);
}
