#include<stdio.h>
int division(int a,int b);
int diffNum(int , int);
int  main(){
    int a;
    int b;
int subtract;
    printf("\nEnter any number :");

    scanf("%d",&a);
    printf("\nEnter another number :");
    scanf("%d",&b);

    division(a,b);
       subtract=diffNum(a,b);
printf("The subtraction of these two number is :%d",subtract);
    return 0;
    


}

int div(int a , int b)
{
int div;
div=a/b;
printf("\n The result is: %d",div);
getch();
}

 

int diffNum(int a, int b)

{
int difference=a-b;
return difference;
getch ();
}

