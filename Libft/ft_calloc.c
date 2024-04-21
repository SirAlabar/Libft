/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:02:56 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/04/21 17:34:07 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdlib.h>
** SYNOPSIS: memory allocation
**
** DESCRIPTION:
** 		The calloc() function contiguously allocates enough space for count
**	objects that are size bytes of memory each and returns a pointer to the
**	allocated memory. The allocated memory is filled with bytes of value
**	zero.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{  
    size_t tot_size;
    void *str;

    if (count == 0 || size == 0)
    {
        count = 1;
        size = 1;
    }
    tot_size = count * size;
    if(!(str = malloc(tot_size)))
        return(0);
    else    
        ft_bzero(str, tot_size);
    return (str);
}