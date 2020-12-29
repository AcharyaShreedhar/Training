#include<stdio.h>
int diffNum(int , int);
int  main(){
    int a;
    int b;
    int subtract;
    printf("\nEnter any number :");
    scanf("%d",&a);
    printf("\nEnter another number :");
    scanf("%d",&b);
    subtract=diffNum(a,b);
printf("The subtraction of these two number is :%d",subtract);
    return 0;
}
int diffNum(int a, int b)

{
int difference=a-b;
return difference;
}