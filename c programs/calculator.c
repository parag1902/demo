#include<stdio.h>
int main()
{

    int a,b,c,x;
    printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n");
    printf("\nEnter the choice ");
    scanf("%d",&x);
    printf("enter the two numbers\n");
    scanf("%d\n%d",&a,&b);
    switch(x)
    {

    case 1:
        c=a+b;
        printf("The Addition is %d",c);
        break;
    case 2:
        c=a-b;
        printf("The Subtraction is %d",c);
        break;
    case 3:
        c=a*b;
        printf("The Multiplication is %d",c);
        break;
    case 4:
        c=a/b;
        printf("The Division is %d",c);
        break;
    default:
        printf("The Wrong choice");
    }
return 0;
}
