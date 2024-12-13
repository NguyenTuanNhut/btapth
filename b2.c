#include <stdio.h>
int main (){
    float sl,time,tt,bonus;
    printf("nhap so time:");
    scanf("%f",&time);
    printf("nhap so sl:");
    scanf("%f",&sl);
    bonus=0;
    if(time>160){
        tt=sl*time;
        bonus=0.1*tt;
        printf("tien phu cap la:%.3f\n",bonus);
    }
    else{
        tt=sl*time;
    }
    printf("tt so tien sl la:%.3f",tt);

    return 0;
}
