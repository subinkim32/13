#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct point
{
	int x;
	int y;
};

int main(int argc, char *argv[]) {
	struct point p1, p2;
	double dist;
	
	printf("input p1 coordinate (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinate (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	// calculate the distance between the two points
	int xdiff = p2.x - p1.x;
	int ydiff = p2.y - p1.y;
	dist = sqrt(xdiff * xdiff + ydiff * ydiff);
	
	printf("Distance between the two points: %lf\n", dist);
	
	
	return 0;
}
