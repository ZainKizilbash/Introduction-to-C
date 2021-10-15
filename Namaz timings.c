#include<stdio.h>
int main(){
int hr,min;
char a;
printf("Enter time in 24 hours format (eg 13:15): ");
scanf("%d%c%d",&hr,&a,&min);
if(hr>24||min>60){
printf("You have entered incorrect time");
}
else if(hr==5&&min>=11||hr==6&&min<26){
printf("It is Fajar Time");
}
else if(hr==6&&min>=26||hr==7||hr==8||hr==9||hr==10||hr==11||hr==12&&min<20){
printf("It is Qaza Fajar Time");
}
else if(hr==12&&min>=20||hr==13||hr==14||hr==15&&min<42){
printf("It is Zuhr Time");
}
else if(hr==15&&min>=42||hr==16||hr==17||hr==18&&min<13){
printf("It is Asr Time");
}
else if(hr==18&&min>=13||hr==19&&min<29){
printf("It is Maghrib Time");
}
else if(hr==19&&min>=29||hr==20||hr==21||hr==22||hr==23){
printf("It is Isha Time");
}
else{
printf("It is Tahajjud Time");
}
return 0;
}
