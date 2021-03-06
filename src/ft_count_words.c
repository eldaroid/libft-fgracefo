/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:02:18 by eldaroid          #+#    #+#             */
/*   Updated: 2020/08/20 09:16:31 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int		ft_count_words(char const *s, char c)
{
	int		flag;
	int		i;
	int		count;

	count = 1;
	flag = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && flag == 1)
			flag = 0;
		if (s[i] != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		i++;
	}
	return (count);
}
