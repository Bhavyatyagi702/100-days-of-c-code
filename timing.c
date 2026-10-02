#include <stdio.h>
int main()
{
int sec, hour, min, seconds;
printf("Enter the total sec: ");
scanf("%d", &sec);
hour=sec/3600;
min=(sec%3600)/60;
seconds=sec%60;
printf("time= %d:%d:%d\n", hour, min, seconds);
return 0;
}
