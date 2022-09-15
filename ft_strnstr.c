/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student1337.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:09:38 by kfouad            #+#    #+#             */
/*   Updated: 2022/09/15 02:33:51 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t	len);
{
    int i;
    int j;
    i = 0;
    j = 0;
    while(haystack[i] != '\0' && needle[i] != '\0')
    {
        if(haystach[i] != needle[i+j])
        {
            j++;
            i = 0;
        }
        else
        {
            i++;
            if(i == n || needle[i] == '\0')
                return (&haystack[j]);
        }
    }
    return (NULL);
}

/*int main(int ac, char **av)
{
	printf("the return value %s",ft_strnstr(av[1],av[2], atoi(av[3])));
}