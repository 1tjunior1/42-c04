/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:37:59 by emorales          #+#    #+#             */
/*   Updated: 2023/09/06 16:42:09 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	s[10];
	int		i;

	nbl = nb;
	i = 0;
	if (nbl == 0)
		write (1, "0", 1);
	if (nbl < 0)
	{
		write (1, "-", 1);
		nbl = nbl * -1;
	}
	while (nbl > 0)
	{
		s[i] = (nbl % 10) + 48;
		nbl = nbl / 10;
		i++;
	}
	while (i > 0)
	{
		write (1, &s[i - 1], 1);
		i--;
	}
}

int main(void)
{
	int n; 
	n = 42;
	ft_putnbr(n);
	return (0);
}
