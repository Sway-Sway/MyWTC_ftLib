/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:34:34 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/05/27 11:53:35 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s2[len] != '\0')
	{
		len++;
	}
	len++;
	while (i < len)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
