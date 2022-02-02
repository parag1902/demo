#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
 if(a>=b)
 {
     if(a>=c)
        printf("Greatest no. is %d",a);
     else
        printf("Greatest no. is %d",c);
 }
 else
 {
     if(b>=c)
        printf("Greatest no.is %d",b);
     else
        printf("Greatest no. is %d",c);
 }
return 0;
}
