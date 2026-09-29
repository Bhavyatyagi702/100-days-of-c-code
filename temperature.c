#include <stdio.h>
int main()
{
float celsius, fahrenheit;
printf("Eter the value of degree celsius: ");
scanf("%f", &celsius);
fahrenheit=(celsius*9.0/5.0)+32;
printf("fahrenheit value: %.2f\n", fahrenheit);
return 0;
}
