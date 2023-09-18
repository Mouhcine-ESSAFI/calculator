#include"lib.h"

int main()
{
char c[5];
double f,s,r;

while(1){
printf("Enter un operator (+, -, *, /, sqrt, pow), if want to exit press x: ");
scanf("%s", c);

if (ft_strcmp(c, "x"))
	exit (0);
r = ft_check_operator_bonus(c);
if (r == 1){
        printf("Enter two firt and second operand: ");
        scanf("%lf%lf", &f,&s);
        }
else if (r == 2){
	printf("enter operand: ");
	scanf(" %lf", &f);
	}
else
	printf("Invalid Operator\n");
if (r != 0){
switch(c[0]){
	case '+':
		printf("%.1lf %s %.1lf = %.1lf\n", f, c, s, f+s);
		break;
	case '-':
		printf("%.1lf %s %.1lf = %.1lf\n", f, c, s, f-s);
		break;
	case '*':
		printf("%.1lf %s %.1lf = %.1lf\n", f, c, s, f*s);
		break;
	case '/':
		printf("%.1lf %s %.1lf = %.1lf\n", f, c, s, f/s);
		break;
	case 'p':
		printf("%.2lf\n", ft_power(f,s));
		break;
	case 's':
		printf("%lf\n", find_sqrt(f));
		break;
        }
}
}
return 0;
}
