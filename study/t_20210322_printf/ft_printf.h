/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jso <jso@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 07:26:10 by jso               #+#    #+#             */
/*   Updated: 2021/03/25 10:37:44 by jso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

# define TEN	10

typedef struct s_flgs
{
	int			left;
	int			zero;
	int			width;
	int			prcs;
	char		type;
	int			ret_value;
}				t_flgs;

t_flgs			g_flg;

int				ft_printf(const char *fmt, ...);

/* 
**				The funcs in the ft_find_fmt.c file below
*/

void			ft_find_fmt(va_list ap, const char *fmt);
void			ft_init_struct(void);
void			ft_check_flgs(const char **fmt);
void			ft_check_width(va_list ap, const char **fmt);
void			ft_check_prcs(va_list ap, const char **fmt);

/* 
**				The funcs in the ft_print_center.c file below
*/

void			ft_check_type(const char **f);
void			ft_print_types(va_list ap);

void			ft_print_c(int ch);
void			ft_print_percent(void);
void			ft_print_s(char *str);
void			ft_padding(int byte);

/* 
**				The funcs in the ft_printf_utils.c file below
*/

void			ft_printf_putchar(int c);
int				ft_strlen(const char *s);

/* 
**				The funcs in the ft_printf_d_u_x_p.c file below
*/

void			ft_print_u(unsigned int u_num);
void			ft_print_recur(unsigned int u_num, int n_base, char *base);
void			ft_print_0_prcs(int len);
void			ft_print_0_padding(int len);
int				ft_count_number(unsigned int num, int base_num);
int				ft_divide_num(unsigned int num, int base_num);

#endif
