#include <stdio.h>

int main(void)
{
	int ret;

	ret = ft_printf("Hello%cWorld", '+');
	printf("return value : %d", ret);
	return (0);
}
