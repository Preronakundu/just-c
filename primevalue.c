#include <stdio.h>

int main()
{
    int a;
    printf("enetr the no.:");
    scanf("%d",&a);
    if(a==2){
        printf("prime no.");
    }
    for(int i=2;i<=a-1;i++){
        
        if(a%i==0){
        printf("composite no.");
        break;
            
        }
        else{
            printf("prime no.");
        }
    }
}
