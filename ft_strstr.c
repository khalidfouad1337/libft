/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student1337.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:38:00 by kfouad            #+#    #+#             */
/*   Updated: 2022/09/15 02:34:58 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;
    i = 0;
    j = 0;
    
     while (haystack[j] != '\0' && needle[i] != '\0')
     {
        
        if(needle[i] != haystack[j + i])
        {
            i = 0;
            j++;
        }
        else
        { 
            i++;
            if(needle[i] == '\0')
                return (&haystack[j]);
        }
     }  
     return (NULL);
    
}
/*int main(int ac, char **av)
{
	printf("the return value %s",ft_strstr(av[1],av[2]));
}