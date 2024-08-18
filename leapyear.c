#include <stdio.h>

int main()
{
    int a;
    printf("enetr the year:");
    scanf("%d",&a);
    if(a%4==0 || a%400==0 && a%100!=0){
        printf("leap year");
    }
    else{
        printf("non leap year");
    }
}
