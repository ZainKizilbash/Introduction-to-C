#include<stdio.h>
int main(){
int d,m,y,p,s;
char v;
printf("Enter the Day of the first dose of vaccination: ");
scanf("%d",&d);
printf("Enter the Month of the first dose of vaccination: ");
scanf("%d",&m);
printf("Enter the Year of the first dose of vaccination: ");
scanf("%d",&y);
printf("Enter the vaccination name: ");
scanf("%*c%c",&v);
switch(v){
case ('F'):
case ('f'):
p=24;
break;
case ('M'):
case('m'):
p=25;
break;
case('S'):
case('s'):
p=15;
break;
case('V'):
case('v'):
p=18;
break;
case('P'):
case('p'):
p=21;
break;
case('A'):
case('a'):
p=0;
break;
}
s=d+p;
if(d>31||m>12){
printf("You have entered wrong date!");
}
else if(v=='a'||v=='A'){
printf("2nd dose not required!");
}
else if(s>30){
s=s-30;
++m;
printf("Please receive the second dose of vaccination after %d/%d/%d from any nearby vaccination center.",s,m,y);
}
else{
printf("Please receive the second dose of vaccination after %d/%d/%d from any nearby vaccination center.",s,m,y);
}
return 0;
}
