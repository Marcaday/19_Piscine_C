/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 10:45:29 by naddino           #+#    #+#             */
/*   Updated: 2019/11/05 14:52:14 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[y] != '\0')
		y++;
	while (src[x])
	{
		dest[x + y] = src[x];
		x++;
	}
	dest[x + y] = '\0';
	return (dest);
}