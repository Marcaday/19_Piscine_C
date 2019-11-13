/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 13:19:50 by naddino           #+#    #+#             */
/*   Updated: 2019/10/31 19:27:18 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 1;
	while (str[x])
	{
		if (str[x] > 64 && str[x] < 91)
			str[x] = str[x] + 32;
		if (str[x] > 96 && str[x] < 123)
		{
			if (!((str[x - 1] > 96 && str[x - 1] < 123)
						|| (str[x - 1] > 64 && str[x - 1] < 91)))
			{
				if (!(str[x - 1] > 47 && str[x - 1] < 58))
					str[x] = str[x] - 32;
			}
		}
		x++;
	}
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	return (str);
}
