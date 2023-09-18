#include"lib.h"

int main()
{
char c;
float f,s;

while(1){
printf("Enter un operator (+, -, *, /), if want to exit press x: ");
scanf(" %c", &c);
if (c == 'x')
	exit (0);
if (ft_check_operator(c) == 0)
	printf("Invalid operator\n");
else
{
printf("Enter two firt and second operand: ");
scanf("%f%f", &f,&s);
switch(c){
	case '+':
		printf("%.1f %c %.1f = %.1f\n", f, c, s, f+s);
		break;
	case '-':
		printf("%.1f %c %.1f = %.1f\n", f, c, s, f-s);
		break;
	case '*':
		printf("%.1f %c %.1f = %.1f\n", f, c, s, f*s);
		break;
	case '/':
		printf("%.1f %c %.1f = %.1f\n", f, c, s, f/s);
		break;
	default:
		printf("Invalid Operator\n");
	}
}
}
return 0;
}
