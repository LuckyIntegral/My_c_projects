/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:16:20 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/28 17:43:17 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

# define STDOUT 1
# define HEX "0123456789abcdef"
# define IS_(IS, YES, NO) ((IS) ? (YES) : (NO))
# define IS_(IS, YES, NO) ((IS) ? (YES) : (NO))
# define IS_NULL(IS, YES, NO) ((IS) == NULL || (IS) == 0 ? (YES) : (NO))

typedef struct s_flags // for each field: 0 if nothing, else !0
{
	int	minus;
	int zero;
	int dot;
	int numb;
}		t_flags;

// printf
int ft_printf(const char *fmt, ...);

// type conversions
int ft_vap(t_flags *flags, void *n);
int ft_vau(t_flags *flags, unsigned int nbr);
int ft_vas(t_flags *flags, const char *str);
int ft_vac(t_flags *flags, const char c);
int ft_vaid(t_flags *flags, int nbr);
int ft_vaxx(t_flags *flags, int nbr);
int ft_vax(t_flags *flags, int nbr);

// function duplicates
size_t ft_nbrlen_hex(int n);
size_t ft_nbrlen(int n);
void ft_flags_init(t_flags *flags);
char *ft_itoa_hex(int n);
int ft_get_spaces(t_flags *flags, size_t strlen);
int ft_xoff(int strlen, int zero, int dot);
int ft_putnstr(const char *str, int n);
int	ft_putnchar(char c, int n);
int ft_istype(char c);
int ft_isspec(char c);

#endif
