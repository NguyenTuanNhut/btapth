#include<stdio.h>
#include<math.h>
int main(){
    int n,c;
    scanf("%d",&n);
    c=1;
    if(n>1 ){
        for(int i=2;i<=sqrt(n);i++){
           if (n % i ==0){
            printf("so %d khong phai la so nguyen to",n);
            c=0;
            break;
           }
           }
        if(c){
        printf("so %d la so nguyen to",n);
        }
    
      
}
    return 0;
}