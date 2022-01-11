/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:27:22 by aelabid           #+#    #+#             */
/*   Updated: 2021/11/26 18:27:30 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strchr(char *str);
char	*get_next_line(int fd);
#endif
