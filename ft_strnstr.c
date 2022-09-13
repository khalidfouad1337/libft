/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student1337.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:09:38 by kfouad            #+#    #+#             */
/*   Updated: 2022/09/09 17:53:46 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

char    *ft_strnstr(char *s1, char *s2, int n)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i+j])
        {
            j++;
            i = 0;
        }
        else
        {
            i++;
            if(i == n || s2[i] == '\0')
                return (&s1[j]);
        }
    }
    return (NULL);
}

int main(int ac, char **av)
{
	printf("the return value %s",ft_strnstr(av[1],av[2], atoi(av[3])));
}