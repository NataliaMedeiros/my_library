/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:18:51 by nmedeiro      #+#    #+#                 */
/*   Updated: 2023/11/27 14:29:14 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
