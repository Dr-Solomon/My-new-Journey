#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
  int a, b, sum, add, sub, mul, Div;
  char operator;
  
  printf("Enter operator\n");
  scanf("%c", &operator);
  printf("Enter two operands\n");
  scanf("%d%d", &a, &b);
  switch(operator)
  {
    case '+':
    sum = a + b;
    printf("sum = %d", sum);
    break;
    case '-':
    sub = a - b;
    printf("sub = %d", sub);
    break;
    case '*':
    mul = a + b;
    printf("mul = %d", mul);
    break;
    case '/':
    Div = a / b;
    printf("Div = %d", Div);
    break;
    default:
    printf("Enter void operator\n");
  }
    getch();
}