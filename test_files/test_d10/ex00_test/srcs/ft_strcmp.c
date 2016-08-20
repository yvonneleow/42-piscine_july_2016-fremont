/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 20:05:44 by dtse              #+#    #+#             */
/*   Updated: 2016/07/18 20:05:46 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		min_length(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;
	int length;

	i = 0;
	result = 0;
	length = min_length(s1, s2);
	while (i < length)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (result);
}
