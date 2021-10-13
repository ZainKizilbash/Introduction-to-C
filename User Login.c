#include<stdio.h>
int main(){
char c1,c2,c3,pw1,pw2,pw3,C1,C2,C3,PW1,PW2,PW3;
printf("\t\t\t\t\t\tSIGN UP\n");
printf("Enter Username: ");
scanf("%*c%c%c%c",&c1,&c2,&c3);
printf("Enter Password: ");
scanf("%*c%c%c%c",&pw1,&pw2,&pw3);
printf("\t\t\t\t\t\tLOG IN\n");
printf("Enter Username: ");
scanf("%*c%c%c%c",&C1,&C2,&C3);
printf("Enter Password: ");
scanf("%*c%c%c%c",&PW1,&PW2,&PW3);
if(C1==c1 &&C2==c2 &&C3==c3){
if(PW1==pw1 &&PW2==pw2 &&PW3==pw3){
printf("You have successfully logged in");
}
else {
printf("Wrong Password");
}
}
else{
printf("Wrong Username");
}
return 0;

}
