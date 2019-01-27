/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dariadasha <dariadasha@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 12:03:24 by dpromoha          #+#    #+#             */
/*   Updated: 2019/01/26 22:29:49 by dariadasha       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft/libft.h"
# define BUFF_SIZE 9999

typedef struct		s_listok
{
	char			*content;
	int				fd;
	struct s_listok	*next;
}					t_listok;

int					get_next_line(const int fd, char **line);

#endif
