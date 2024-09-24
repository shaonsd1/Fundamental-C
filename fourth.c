#include<stdio.h>


int main()
{
    int n,f,t,s,v;

    printf("Enter your 3 digit Number = ");
    scanf("%d",&n);

    f = n / 100;
    t = n % 10;
    s = f * f ;
    v = t * t ;


    printf("Squre Root Of %d and %d = %d and %d ",f,t,s,v);






    return 0;


}
