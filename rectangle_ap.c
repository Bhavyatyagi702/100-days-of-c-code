#include <stdio.h>
int main() {
int area, perimeter, length, breadth;
printf("Enter the value of length and breadth: ");
scanf("%d %d", &length, &breadth);
area=length*breadth;
perimeter=2*(length+breadth);
printf("area: %d\n", area);
printf("perimeter: %d\n", perimeter);
return 0;
}
