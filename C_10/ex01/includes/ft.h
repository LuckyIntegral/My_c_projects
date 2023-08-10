/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <frantsv2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:38:13 by vfrants           #+#    #+#             */
/*   Updated: 2023/08/10 23:55:28 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>

void	ft_putstr(char *str, int port);
void	ft_handle_error(char *file);
void	ft_stdin(void);
int	ft_display_file(char *file);

# define STDIN 0
# define STDOUT 1
# define STDERR 2

#endif
