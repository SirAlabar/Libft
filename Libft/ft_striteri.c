/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:32:12 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/04/14 17:27:40 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: Applies the function ’f’ on each character of the string passed
**
** DESCRIPTION:
** 		Applies the function ’f’ on each character of the string passed 
as argument, passing its index as first argument. Each character is passed 
by address to ’f’ to be modified if necessary.
*/

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*));