/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andchris <andchris1987@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:06:50 by andchris          #+#    #+#             */
/*   Updated: 2022/02/08 20:12:58 by andchris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

#include <stdlib.h>
#include <unistd.h>

// UTILS
size_t  ft_strlen(char *str);
char    *ft_strchr(char *s, int c);
char    *ft_strjoin(char *s1, char *s2);

// GNL
char    *get_next_line(int fd);
char    *ft_get_line(char *save);
char    *ft_save(char *save);
char    *ft_read_and_save(int fd, char *save);

#endif