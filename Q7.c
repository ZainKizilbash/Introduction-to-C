#include<stdio.h>
int main(){
float height,weight,BMI;
printf("Input your weight in kilogram: ");
scanf("%f",&weight);
printf("Input your height in meters: ");
scanf("%f",&height);
BMI=weight/(height*height);
printf("Your body mass index is: %0.1f\n",BMI);
if(BMI<18.5){
printf("You are underweight");
}
else if (BMI>18.5 && BMI<24.9){
printf("Your weight is normal");
}
else if(BMI>25 && BMI<29.9){
printf("Your are overweight");
}
else{
printf("You are obese");
}
return 0;
}
