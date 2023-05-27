#include <stdio.h>

int main() 
{

  char op;
  double f,s;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c",&op);
  printf("Enter two operands: ");
  scanf("%lf %lf",&f,&s);

  switch (op) 
  {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", f,s, f+s);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", f,s, f-s);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", f, s, f * s);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", f, s, f / s);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! \noperator is not correct");
  }
}
//error is coming in % and ** operators.

/*
Enter an operator (+, -, *, /): /
Enter two operands: 25
5
25.0 / 5.0 = 5.0
*/
