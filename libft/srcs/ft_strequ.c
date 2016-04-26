/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:12:34 by tmerlier          #+#    #+#             */
/*   Updated: 2013/12/29 18:39:49 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (!(s1 == NULL || s2 == NULL))
	{
		while (s1[i] == s2[i])
		{
			if (s1[i] == '\0')
				return (1);
			i++;
		}
	}
	return (0);
}