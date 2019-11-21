#include<stdio.h>
int main(){
    int i, input2, hold;
    int result=0;
    scanf("%d%d", &i, &input2);
    if(i>=input2){
        hold=i;
        i=input2;
        input2=hold;
    }
    for(int i=i; i<=input2; i++){
        int count=1;
        int n=i;
        do{
            if(n%2==1){
                n=(3*n+1);
            }else{
                n=(n/2);
            }
            count++;
        }while(n!=1);
        if(count>=result) result=count;
    }
    printf("%d %d %d", i, input2, result);
    return 0;
}
