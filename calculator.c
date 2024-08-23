#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,option,c;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("Select your option\n");
    scanf("%d",&option);
    switch(option)
    {
     case 1:


        printf("Addition\n");
        printf(" in Addition=%d",a+b);
        break;
     case 2:
        printf("Subtration\n");
        printf("in subration=%d ",a-b);
        break;
     case 3:
        printf("Multification\n");
        printf("in Multification=%d",a*b);
        break;
     case 4:
        printf("divion\n");
        printf("in divion=%d",a/b);
        break;
     default:
        printf("Invaild number");
    }
}
