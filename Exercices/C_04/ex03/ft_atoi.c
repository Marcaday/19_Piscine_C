/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 11:46:50 by naddino           #+#    #+#             */
/*   Updated: 2019/11/04 11:23:41 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int neg;
	int nb;
	int x;

	neg = 1;
	x = 0;
	nb = 0;
	while (str[x] == '\t' || str[x] == '\v' || str[x] == '\n'
			|| str[x] == '\r' || str[x] == '\f' || str[x] == ' ')
		x++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			neg *= (-1);
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		nb = nb + str[x] - '0';
		if (str[x + 1] >= '0' && str[x + 1] <= '9')
			nb *= 10;
		x++;
	}
	nb *= neg;
	return (nb);
}