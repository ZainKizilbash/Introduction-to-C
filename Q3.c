#include<stdio.h>
#include <math.h>
int main()
{
float a,b,c,Root1,Root2,x1,x2,y1,y2,distance;
printf("Enter value of a: ");
scanf("%f",&a);
printf("Enter value of b: ");
scanf("%f",&b);
printf("Enter value of c: ");
scanf("%f",&c);
Root1=((-b+sqrt(b*b-4*a*c))/(2*a));
printf("Root 1 = %0.3f\n",Root1);
Root2=((-b-sqrt(b*b-4*a*c))/(2*a));
printf("Root 2= %0.3f\n",Root2);
printf("Enter value of x1: ");
scanf("%f",&x1);
printf("Enter value of y1: ");
scanf("%f",&y1);
printf("Enter value of x2: ");
scanf("%f",&x2);
printf("Enter value of y2: ");
scanf("%f",&y2);
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("Distnace between these two points is: %0.2f",distance);
return 0;
}
