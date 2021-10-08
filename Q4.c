#include<stdio.h>
int main (){
float a;
float b;
float add;
float sub;
float div;
float multi;
//int f1 = (int)a, f2 = (int)b;
//int rem = (int)a % (int)b;
//int rem = f1 % f2;
printf("Enter 1st number: ");
scanf("%f",&a);
printf("Enter 2nd number: ");
scanf("%f",&b);
add=a+b;
sub=a-b;
div=a/b;
multi=a*b;
printf("Addition of these 2 numbers: %0.2f\n",add);
printf("Subtraction of these 2 numbers: %0.2f\n",sub);
printf("Division of these 2 numbers: %0.2f\n",div);
printf("Multiplication of these 2 numbers: %0.2f\n",multi);
printf("Increment 1st number: %0.2f\n ",++a);
printf("Increment 2nd number: %0.2f\n ",++b);
printf("Decrement 1st number: %0.2f\n ",--a);
printf("Decrement 2nd number: %0.2f\n ",--b);
//printf("Remainder 1stnumber/2ndnumber: %d", rem );
if(sub>10 && add>10){
printf("Sum and sub are same");
}
else{
printf("Sum and sub are not same");
}
if(add!=20){
printf("\nSum is not equal to 20!");
}
if (add<0 || sub<0){
printf("\nWhether subtraction or addition gives negative result");
}
return 0;
}
