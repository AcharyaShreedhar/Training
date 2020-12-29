#include<stdio.h>

int  main(){
    int a;
    int b;
    int div(int a , int b);

    printf("\nEnter any number");
    scanf("%d",&a);
    printf("\nEnter another number");
    scanf("%d",&b);
    division(a,b);
    
    return 0;

}

int division(int a,int b)
{
int div;
div=a/b;
printf("\n The result is: %d",div);
getch();
}

