#include <stdio.h>
int main() {
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("sum: %d\n", a+b);
printf("difference: %d\n", a-b);
printf("multiple: %d\n", a*b);
printf("division: %d\n", a/b);
printf("remainder: %d\n", a%b);
return 0;
}
