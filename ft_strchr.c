/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfouad <kfouad@student1337.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:00:33 by kfouad            #+#    #+#             */
/*   Updated: 2022/09/13 18:04:29 by kfouad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *s, int c)
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