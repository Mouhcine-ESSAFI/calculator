#include"lib.h"

int ft_check_operator_bonus(char *c)
{
if (ft_strcmp(c, "+"))
	return (1);
if (ft_strcmp(c, "-"))
        return (1);
if (ft_strcmp(c, "*"))
        return (1);
if (ft_strcmp(c, "/"))
        return (1);
if (ft_strcmp(c, "sqrt"))
        return (2);
if (ft_strcmp(c, "pow"))
        return (1);
return (0);
}
