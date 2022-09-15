/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student1337.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:00:33 by kfouad            #+#    #+#             */
/*   Updated: 2022/09/15 02:30:45 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    while(s[i] != '\0')
        {
            if(s[i] == c)
                return (&s[i]);
        }
    return (NULL);
}