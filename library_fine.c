#include <stdio.h>
int main()
{
int days, fine;
printf("Enter the no. of late days: ");
scanf("%d", &days);
if (days<=0)
{
printf("No fine \n");
}
else if (days<=5)
{
fine=days*2;
printf("Total fine:%d\n", fine);
}
else if (days>5 && days<=10)
{
fine=days*4;
printf("Total fine:%d\n", fine);
}
else if (days>10 && days<=30)
{
fine=days*6;
printf("Toatal fine:%d\n", fine);
}
else
{
printf("Membership cancelled \n");
}
return 0;
}
