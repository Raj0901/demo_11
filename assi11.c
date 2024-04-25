#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,s,parameter,area;
    printf("enter the a value\n");
    scanf("%d",&a);
    printf("enter the b value\n");
    scanf("%d",&b);
    printf("enter the c value\n");
    scanf("%d",&c);
    printf("enter the s value\n");
    scanf("%d",&s);
    parameter = a+b+c*a+c+b;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf(" parameter %d\n",parameter);
    printf(" area %d",area);
}