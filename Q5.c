#include<stdio.h>
int main(){
float PF,Maths,Eng,Physics,Ict,percent;
printf("Enter your PF marks: ");
scanf("%f",&PF);
printf("Enter your Maths marks: ");
scanf("%f",&Maths);
printf("Enter your English marks: ");
scanf("%f",&Eng);
printf("Enter your Physics marks: ");
scanf("%f",&Physics);
printf("Enter your ICT marks: ");
scanf("%f",&Ict);
percent=(Physics+Ict+Eng+Maths+PF)/500*100;
if(percent<50||PF<40||Maths<40||Eng<40||Physics<40||Ict<40){
printf("You have failed this course with a percentage of %0.2f%%",percent);
}
else{
printf("You have passed this course with a percentage of %0.2f%%",percent);
}
return 0;
}
