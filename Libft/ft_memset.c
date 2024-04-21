/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:04:26 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/04/15 21:34:37 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: write a byte to a byte string
**
** DESCRIPTION:
** 		The memset() function writes n bytes of value c (converted to an
**	unsigned char) to the string s.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
    unsigned int i;
    unsigned char *p = (unsigned char *)b;
    
    i = 0;    
    while(i < n)
    {
        p[i] = (unsigned char)c;
        i++;        
    }
    return(b);
}