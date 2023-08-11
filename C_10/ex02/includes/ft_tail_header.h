/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_header.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:25:10 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/11 23:28:02 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_HEADER_H
# define FT_TAIL_HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>
# include <stdlib.h>

typedef unsigned long t_size;

typedef struct s_files
{
	int option; // is offset present?
	int offset; // if yes, than what is the size?
	int begin;	// which char *argv leads to the first file?
}		t_files;

t_size	ft_fsize(char *file);
void	ft_putstr(char *str, int port);
void	ft_empty_option(void);
void	ft_handle_error(char *filename);
int	ft_display_file(char *file, t_size size, t_size offset, int *first);
int ft_parse_input(t_files *files, char **argv);
int	ft_illegal_offset(char *str);
int ft_no_arg_option(void);

# define STDIN 0
# define STDOUT 1
# define STDERR 2

#endif
