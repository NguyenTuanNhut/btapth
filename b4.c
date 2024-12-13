#include<stdio.h>
int main(){
    int number,factor;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(number%i==0){
            factor=i;
            printf("%d ",factor);
        }
    }
    return 0;
}

