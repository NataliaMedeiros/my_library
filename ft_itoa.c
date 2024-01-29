/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 08:17:49 by nmedeiro      #+#    #+#                 */
/*   Updated: 2023/11/27 18:08:20 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

static int	intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*new_n;
	int			len;
	long int	nb;

	nb = n;
	len = intlen(n);
	new_n = malloc((len + 1) * sizeof(char));
	if (!new_n)
		return (NULL);
	new_n[len] = '\0';
	if (nb < 0)
	{
		new_n[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		new_n[0] = 0 + '0';
	while (nb > 0)
	{
		len--;
		new_n[len] = nb % 10 + '0';
		nb /= 10;
	}
	return (new_n);
}
