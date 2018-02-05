#include <stdio.h>
int main()
{
    double a1, a2, a3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &a1, &a2, &a3);
    if( a1>=a2 && a1>=a3 )
    printf("%.2f is the largest number.", a1);
    if( a2>=a1 && a2>=a3 )
    printf("%.2f is the largest number.", a2);
    if( a3>=a1 && a3>=a2 )
    printf("%.2f is the largest number.", a3);
    return 0;
}
