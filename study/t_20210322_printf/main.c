#include "ft_printf.h"

int main(void)
{

	unsigned int u_num1;
	char *u_num;

	//u_num1 = 0xFFFFFFFF;
//	u_num = 4294967161;
	u_num = "hello";

	printf("\n13: org\t%-3.p", &u_num);
	ft_printf("\n\t%-3.p", &u_num);
	ft_printf("\n");
	ft_printf("\n\t%.p", &u_num);
	ft_printf("\n");
	printf("\n18: org\t%-3.p", &u_num);
	//printf("\n19: org\t%lld", &u_num);
	ft_printf("\n");
	/*
	ft_printf("\n%u", u_num);
	ft_printf("\n%u", 0);
	ft_printf("\n%05.3u", 1);
	ft_printf("\n");
	ft_printf("\n%-4.*u", -4, 0);
	ft_printf("\n");
	ft_printf("\n%-4.u", 0);
	ft_printf("\n");
	ft_printf("\n%-4.*u", -4, 0);
	ft_printf("\n");
	ft_printf("\n|%4.*u|", -4, 0);
	ft_printf("\n");
	ft_printf("\n%4.*u", -4, 0);
	ft_printf("\n");
	ft_printf("\n%05u", 1);
	ft_printf("\n");
	ft_printf("\n%-05u", 1);
	ft_printf("\n");
	ft_printf("\n%05u", 123456);
	ft_printf("\n");
	ft_printf("\n%05.3u", -1);
	ft_printf("\n");
	ft_printf("\n%-05.3u", 1);
	ft_printf("\n");

	 c, s type
	ft_printf("\nhello%c", 'Y');
	ft_printf("\nhello%4c", 'Y');
	ft_printf("\nhello%-4c", 'Y');

	ft_printf("\nhello%%");
	ft_printf("\nhello%4%");
	ft_printf("\nhello%-4%");

	ft_printf("\nhello%s", 0);
	ft_printf("\nhello%.4s", 0);
	ft_printf("\nhello%-4s", "string");
	 c, s type */
	return (0);
}
