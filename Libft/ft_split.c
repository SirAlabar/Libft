/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:30:43 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/04/24 20:52:25 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: split string, with specified character as delimiter, into an array
**			of strings
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns an array of strings obtained by
**	splitting 's' using the character 'c' as a delimiter. The array must be
**	ended by a NULL pointer.
*/

#include "libft.h"

ft_countwords(char const *s, char c)
{
	unsigned int	count;
	unsigned int	flag;
	unsigned int	i;

	i = 0;
	flag = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			flag = 0;
		}
		else if (s[i] != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c);
{
	char **res;

	if (!(res = (char *)malloc(ft_coundwords(*s) + 1)))
		return (0);
}
