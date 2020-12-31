#include<stdio.h>
int product(int, int);
int  main(){
    int a;
    int b;
    printf("\nEnter any number");
    scanf("%d",&a);
    printf("\nEnter another number");
    scanf("%d",&b);
    printf("\nThe product is %d", product(a,b));
    return 0;
}
int product(int x,int y)
{
    return (x*y);
}