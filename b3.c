#include<stdio.h>
int main(){
    int number,money;
    float ce;
   
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf(" Nhap don vi tien te ban muon chuyen doi (1-8) ?");
    scanf("%d",&number);
    scanf("%d",&money);
    switch (number){
        case 1:
        ce=23.500*money;
        printf("%d USD = %.2f VND",money,ce);
        break;
        case 2:
        ce=25.000*money;
        printf("%d EUR = %.2f VND",money,ce);
        break;
        case 3:
        ce=28.000*money;
        printf("%d GBP = %.3f VND",money,ce);
        break;
        case 4:
        ce=0.180*money;
        printf("%d JPY = %.3f VND",money,ce);
        break;
        case 5:
        ce=money / 23.500;
        printf("%d VND = %.3f USD ",money,ce);
        break;
        case 6:
        ce=money/25.000;
        printf("%d VND = %.3f EUR",money,ce);
        break;
        case 7:
        ce=money/28.000;
        printf("%d VND = %.3f GBP",money,ce);
        break;
        case 8:
        ce=money/0.18;
        printf("%d VND = %.3f JPY",money,ce);
        break;
    }
    return 0;
}
