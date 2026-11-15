#include <stdio.h>
int main()
{
int bill, units;
printf("Enter the no. of units: ");
scanf("%d", &units);
if (units<=100)
{
bill=units*5;
printf("Total electricity bill:%d\n", bill);
}
else if (units>100 && units<=200)
{
bill=units*7;
printf("Total electricity bill:%d\n", bill);
}
else if (units>200 && units<=300)
{
bill=units*10;
printf("Total electricity bill:%d\n", bill);
}
else
{
bill=units*12;
printf("Total electricity bill:%d\n", bill);
}
return 0;
}
