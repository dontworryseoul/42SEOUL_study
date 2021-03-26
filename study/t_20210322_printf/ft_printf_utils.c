/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jso <jso@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:36:55 by jso               #+#    #+#             */
/*   Updated: 2021/03/26 13:03:03 by jso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_padding(int byte)
{
	char	padding_char;
	int		cp_width;

	printf("\n20: %d", byte);
	printf("\n21: %d", g_flg.width);
	if (g_flg.type == '%' && g_flg.zero && !g_flg.left)
		padding_char = '0';
	else
		padding_char = ' ';
	if (0 < (g_flg.width - byte))
	{
		cp_width = g_flg.width - byte;
		while (cp_width-- > 0)
			ft_printf_putchar(padding_char);
	}
}

void	ft_printf_putchar(int c)
{
	write(1, &c, 1);
	++g_flg.ret_value;
}

int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		++s;
		++i;
	}
	return (i);
}
