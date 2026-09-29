#include <stdio.h>
int main()
{
int a, b, c;
printf("Eter the value of a: ");
scanf("%d", &a);
printf("Eter the value of b: ");
scanf("%d", &b);
c=a;
a=b;
b=c;
printf("a= %d\n", a);
printf("b= %d\n", b);
return 0;
}
