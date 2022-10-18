/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouvera <tbouvera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:11:26 by tbouvera          #+#    #+#             */
/*   Updated: 2022/10/18 16:16:24 by tbouvera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char		*get_next_line(int fd);
static char	*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
size_t		ft_strlen(const char *str);

#endif