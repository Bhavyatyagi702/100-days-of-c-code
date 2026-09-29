#include <stdio.h>
int main()
{
int a, b;
printf("Eter the value of a: ");
scanf("%d", &a);
printf("Eter the value of b: ");
scanf("%d", &b);
a=b+a;
b=a-b;
a=a-b;
printf("the value of a= %d\n", a);
printf("the value of b= %d\n", b);
return 0;
}
