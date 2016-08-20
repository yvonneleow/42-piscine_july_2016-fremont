/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 15:40:46 by dtse              #+#    #+#             */
/*   Updated: 2016/07/22 15:40:47 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int max;
	int i;

	i = 0;
	max = tab[0];
	while (i < length)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}