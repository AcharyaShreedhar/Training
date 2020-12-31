#include<stdio.h>
#include<conio.h>
float division(float a,float b);
float diffNum(float , float);
int  main(){
    float a;
    float b;
float subtract;
    printf("\nEnter any number :");

    scanf("%f",&a);
    printf("\nEnter another number :");
    scanf("%f",&b);

    division(a,b);
       subtract=diffNum(a,b);
printf("The subtraction of these two number is :%f",subtract);
    return 0;
    


}

float div(float a , float b)
{
float div;
div=a/b;
printf("\n The result is: %f",div);
getch();
}

 

float diffNum(float a, float b)

{
float difference=a-b;
return 0;
getch ();
}
