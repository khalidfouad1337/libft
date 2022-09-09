/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student1337.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:38:00 by kfouad            #+#    #+#             */
/*   Updated: 2022/09/09 01:07:48 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *s1, char *s2)
{
    int i;
    int j;
    i = 0;
    j = 0;
    
     while (s1[j] != '\0' && s2[i] != '\0')
     {
        
        if(s2[i] != s1[j + i])
        {
            i = 0;
            j++;
        }
        else
        { 
            i++;
            if(s2[i] == '\0')
                return &s1[j];
        }
     }  
     return (NULL);
    
}
int main(int ac, char **av)
{
	printf("the return value %s",ft_strstr(av[1],av[2]));
}