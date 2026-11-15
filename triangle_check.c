#include <stdio.h>
int main()
{
int a, b, c;
printf("Enter the three sides of the triangle: ");
scanf("%d %d %d", &a, &b, &c);
if (a+b<=c || a+c<=b || b+c<=a)
{
printf("Not a valid triangle \n");
}
else if (a==b && b==c)
{
printf("The triangle is Equilateral \n");
}
else if (a==b || b==c || a==c)
{
printf("The triangle is Isosceles \n");
}
else
{
printf("Scalene triangle \n");
}
return 0;
}
