#include <stdio.h>
int main (){
    float luong,giolam,tong,phucap;
    printf("nhap so giolam:");
    scanf("%f",&giolam);
    printf("nhap so luong:");
    scanf("%f",&luong);
    phucap=0;
    if(giolam>160){
        tong=luong*giolam;
        phucap=0.1*tong;
        printf("tien phu cap la:%.3f\n",phucap);
    }
    else{
        tong=luong*giolam;
    }
    printf("tong so tien luong la:%.3f",tong);

    return 0;
}