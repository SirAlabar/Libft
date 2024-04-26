/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:58:36 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/04/26 22:28:59 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: apply function to content of all list's elements into new list
**
** DESCRIPTION:
** 		Iterates the list ’lst’ and applies the function ’f’ to the content of
**	each element. Creates a new list resulting of the successive applications of
**	the function ’f’. The ’del’ function is used to delete the content of an
**	element if needed.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;

    if(!lst || !f || !del)
        return(NULL);
    new_lst = NULL;    
    while(lst)
    {
        void *new_content =f(lst->content);
        if(!new_content)
        {
            ft_lstclear(&new_lst, del);
            del(lst->content);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, ft_lstnew(new_content));
        lst = lst->next;
    }
    return (new_lst);     
}
