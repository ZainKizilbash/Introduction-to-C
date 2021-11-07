#include<stdio.h>
int main(){
int a=0, count=0, marks=0;
printf("(Q1)If x=5 and y=8 then x+y=?\n");
printf("Option 1: 23\n");
printf("Option 2: 13\n");
printf("Option 3: 10\n");
printf("Option 4: 9\n");
scanf("%d",&a);
if(a==2){
marks=marks+4;
}
else{
marks=marks-1;
++count;
}
printf("(Q2)If z=10 and y=2 then z/y=?\n");
printf("Option 1: 5\n");
printf("Option 2: 2\n");
printf("Option 3: 4\n");
printf("Option 4: 0.5\n");
scanf("%d",&a);
if(a==1){
marks=marks+4;
}
else{
marks=marks-1;
++count;
}
printf("(Q3)If distance=50 and time=10  then speed=?\n");
printf("Option 1: 20\n");
printf("Option 2: 6\n");
printf("Option 3: 5\n");
printf("Option 4: 11\n");
scanf("%d",&a);
if(a==3){
marks=marks+4;
}
else{
marks=marks-1;
++count;
}
printf("(Q4)If x=10 and y=15 then x*y=?\n");
printf("Option 1: 150\n");
printf("Option 2: 200\n");
printf("Option 3: 100\n");
printf("Option 4: 90\n");
scanf("%d",&a);
if(a==1){
marks=marks+4;
}
else{
marks=marks-1;
++count;
}
if(count==4){
printf("Sorry you did not qualify for the admission!");
exit(1);
}
printf("(Q5)If x=500 and y=90 then x-y=?\n");
printf("Option 1: 480\n");
printf("Option 2: 420\n");
printf("Option 3: 300\n");
printf("Option 4: 410\n");
scanf("%d",&a);
if(a==4){
marks=marks+4;
}
else{
marks=marks-1;
++count;
}
if(count==4){
printf("Sorry you did not qualify for the admission!");
exit(1);
}
else if(marks==20){
printf("Congratulations you have qualified for the admission!");
exit(1);
}
printf("(Q6)If a=20 and b=10 then a mod b=?\n");
printf("Option 1: 0\n");
printf("Option 2: 10\n");
printf("Option 3: 20\n");
printf("Option 4: 5\n");
scanf("%d",&a);
if(a==1){
marks=marks+4;
}
else{
marks=marks-1;
++count;
}
if(count==4){
printf("Sorry you did not qualify for the admission!");
exit(1);
}
else if(marks==20){
printf("Congratulations you have qualified for the admission!");
exit(1);
}
printf("(Q7)If x=10, y=9 and z=9 then xyz=?\n");
printf("Option 1: 480\n");
printf("Option 2: 420\n");
printf("Option 3: 810\n");
printf("Option 4: 410\n");
scanf("%d",&a);
if(a==3){
marks=marks+4;
}
else{
marks=marks-1;
++count;
}
if(count==4){
printf("Sorry you did not qualify for the admission!");
exit(1);
}
else if(marks==20){
printf("Congratulations you have qualified for the admission!");
exit(1);
}
printf("(Q8)If c=10 and d=5 then cd+cd=?\n");
printf("Option 1: 95\n");
printf("Option 2: 100\n");
printf("Option 3: 90\n");
printf("Option 4: 70\n");
scanf("%d",&a);
if(a==2){
marks=marks+4;
}
else{
marks=marks-1;
++count;
}
if(count==4){
printf("Sorry you did not qualify for the admission!");
exit(1);
}
else if(marks==20){
printf("Congratulations you have qualified for the admission!");
exit(1);
}
return 0;
}
