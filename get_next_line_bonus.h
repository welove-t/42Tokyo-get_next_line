/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:37:08 by terabu            #+#    #+#             */
/*   Updated: 2022/11/10 11:04:00 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strldup(const char *s, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
