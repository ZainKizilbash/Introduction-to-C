#include <stdio.h>
int main(){
	float velocity;
	float acceleration;
	float time;
	float distance;
	printf("Initial velocity:  ");
	scanf("%f", &velocity);
	printf("Acceleration: ");
	scanf("%f", &acceleration);
	printf("Time: ");
	scanf("%f", &time);
	distance=velocity*time+0.5*acceleration*time*time;
	printf("Distance covered: %0.4f m",distance);
	return 0;
}
