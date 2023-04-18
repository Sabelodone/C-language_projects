#include <stdio.h>

/**
*  main - entry point
*  @description: A simple calculator program that takes two numbers and an operator
*  from the user and performs the corresponding arithmetic operation
*
*  @return: (0).
*/

int main(void)
{

char operator;
double num1, num2, result;

printf("Enter an operator (+, -, *, /) :");
scanf("%c", &operator);

printf("Enter a number:");
scanf("%lf %lf", &num1, &num2);

switch (operator)
{
case '+':
	result = num1 + num2;
	printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
	break;

case '-':
	result = num1 + num2;
	printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
	break;

case '*':
	result = num1 - num2;
	printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
	break;

case '/':
	result = num1 / num2;
	printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
	break;

default:
	printf("Error: Invalid operator");

return (1);
}

printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

return (0);
}
