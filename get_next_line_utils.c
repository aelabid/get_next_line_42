/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:27:11 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/26 18:27:14 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	int		i;
	char	*cpy;

	cpy = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (cpy == 0)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s2)
		return (NULL);
	if (!s1)
		s1 = ft_strdup("");
	j = 0;
	i = -1;
	str = (char *)malloc((ft_strlen(s2) + ft_strlen(s1) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
	{
		str[i] = s2[j++];
		i++;
	}
	str[i] = '\0';
	free((char *)s1);
	return (str);
}

int	ft_strchr(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
	}
	return (0);
}
