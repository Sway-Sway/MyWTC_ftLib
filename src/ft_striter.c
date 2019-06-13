/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 08:53:32 by jkwayiba          #+#    #+#             */
/*   Updated: 2019/06/13 09:36:43 by jkwayiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striter(char *s, void(*f)(char *))
{
	if (f)
		while (s)
			f(s++);
}
