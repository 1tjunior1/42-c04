/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:31:04 by emorales          #+#    #+#             */
/*   Updated: 2023/09/06 16:53:57 by tjair-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	output;

	i = 0;
	sign = 1;
	output = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = sign * -1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			output = output * 10;
			output = output + (str[i] - 48);
			i++;
		}
	}
	return (output);
}

int     main(void)
{
        char str[] = " ---+--+1234ab567";

        printf ("%d", ft_atoi(str));
        return (0);
}
