#include <stdio.h>
int main()
{
char ch;
printf("Enter the character: ");
scanf("%c", &ch);
if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{ 
if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' ||ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
printf("%c The character is a vowel.\n", ch);
}
else
{
printf("%c The character is a consonant.\n", ch);
}
}
return 0;
}
