// Coordinates in Cartesian Plane
#include <stdio.h>
int main () {
	
	float x,y;
	
	printf("Enter coordinates: ");
	scanf("%f , %f",&x,&y);
	
	if ( x == 0 && y == 0) {
		printf("The point lies on the origin (0,0)");
	} else if ( x > 0 && y > 0) {
		printf("The point (%.2f,%.2f) lies in the First Quadrant.",x,y);
	} else if ( x > 0 && y < 0) {
		printf("The point (%.2f,%.2f) lies in the Third Quadrant.",x,y);
	} else if ( x < 0 && y > 0) {
		printf("The point (%.2f,%.2f) lies in the Second Quadrant.",x,y);
	} else if ( x < 0 && y < 0) {
		printf("The point (%.2f,%.2f) lies in the Fourth Quadrant.",x,x);
	} else if ( x == 0 && y != 0){
		printf("The point (%.2f,%.2f) lies on X-axis.",x,y);
	} else if ( x != 0 && y == 0){
		printf("The point (%.2f,%.2f) lies on Y-axis.",x,y);
	}
	
	return 0;
}