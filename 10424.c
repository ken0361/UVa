#include<stdio.h>
#include<string.h>
int love(char name[]);
int add(int num);

int main()
{
    char name1[25], name2[25];

    while(gets(name1)&&gets(name2))
    {
        int a=add(love(name1));
        int b=add(love(name2));
        printf("%.2lf %%\n", a>b? (double)b*100/a : (double)a*100/b);
    }
    return 0;
}

int love(char name[])
{
    int sum=0;
    for(int i=0; i<strlen(name); i++)
    {
        for(int j='A'; j<='Z'; j++)
        {
            if(name[i]==j) sum+=(j-64);
        }
        for(int j='a'; j<='z'; j++)
        {
            if(name[i]==j) sum+=(j-96);
        }
    }
    return sum;
}

int add(int num)
{

    int sum=0;
    while(num)
    {
        sum+=num%10;
        num=num/10;
    }
    return sum<10? sum : add(sum);
}
