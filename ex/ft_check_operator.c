#include"lib.h"

int ft_check_operator(char c)
{
if (c == '+')
	return (1);
if (c == '-')
	return (1);
if (c == '*')
	return (1);
if (c == '/')
	return (1);
return (0);
}
