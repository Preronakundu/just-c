#include <stdio.h>

int main()
{
    int a;
    printf("enetr the no.:");
    scanf("%d",&a);
  // ternary operator
    a%2==0 ? printf("even") : printf("odd");
    return 0;
}
