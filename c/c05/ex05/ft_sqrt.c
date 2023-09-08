/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:53:26 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/20 10:25:41 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int x)
{
	int	i;

	i = 1;
	if (x == 0 || x == 1)
		return (x);
	while (i * i < x && i < 46341)
	{
		i++;
	}
	if (i * i == x)
		return (i);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int	x;

	x = -1;
	printf("res: %d", ft_sqrt(x));
	return (0);
}
 */
