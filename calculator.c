#include<stdio.h>
int main() {
  int a, b;
char operator;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter your operator (+, -, *, /): ");
scanf(" %c", &operator);
printf("Enter second number: ");
scanf("%d", &b);
if (operator=='+')
  printf("Result = %d\n", a+b);
else if (operator=='-')
  printf("Result = %d\n", a-b);
else if (operator=='*')
  printf("Result = %d\n", a*b);
else if (operator=='/')
{
  if (b!=0)
  printf("Result = %d\n", a/b);
else
  printf("Cannot be divided by zero");
}
else
  printf("Invalid Operator!");
return 0;



