#include <stdio.h>
int main()
{
int n;
printf("Enter the percentage: ");
scanf("%d", &n);
if (n>=90 && n<=100)
printf("Grade A\n");
else if (n>=80 && n<=89)
printf("Grade B\n");
else if (n>=70 && n<=79)
printf("Grade C\n");
else if (n>=60 && n<=69)
printf("Grade D\n");
else if (n>0 && n<60)
printf("Grade F\n");
else
printf("the input is wrong.\n" );
return 0;
}
