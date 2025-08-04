/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:47:15 by ngualtie          #+#    #+#             */
/*   Updated: 2025/08/04 10:47:17 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	a;

	if (!s)
		return (NULL);
	a = 0;
	while (s[a])
	{
		if (s[a] == (char) c)
			break ;
		a++;
	}
	if (s[a] == (char) c)
		return ((char *) s + a);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
    char	*new;
    size_t	a;

    if (!s1)
        return (NULL);
    new = malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!new)
        return (NULL);
    a = 0;
    while (s1[a])
    {
        new[a] = s1[a];
        a++;
    }
    new[a] = '\0';
    return (new);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	a;
	size_t	b;
	
	if (!s1 || !s2)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	a = 0;
	while (s1[a])
	{
		new[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2[b])
	{
		new[a + b] = s2[b];
		b++;
	}
	new[a + b] = '\0';
	return (new);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	if (size != 0 && count > ((size_t)-1 / size))
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
		((unsigned char *)ptr)[i++] = 0;
	return (ptr);
}