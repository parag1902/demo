#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter a 3 digit niumber");
    scanf("%d",&a);

    b=a/100;
    c=((a/10)%10);
    d=a%10;
     if(a==b*b*b+c*c*c+d*d*d)
     {
         printf("The number is armstrong");
     }
     else
     {
         printf("The number is not armstrong");
     }

}
