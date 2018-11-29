/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:33:24 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/13 16:33:26 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>

static char	*ft_ret(char *ret, char **line, char *adr_retour)
{
	char	*tmp;
	int		i;

	i = adr_retour == NULL ? ft_strlen(ret) : adr_retour - ret;
	if (adr_retour != NULL)
		*line = ft_strsub(ret, 0, adr_retour - ret);
	else
		*line = ft_strdup(ret);
	if (i < (int)ft_strlen(ret))
	{
		tmp = ret;
		ret = ft_strdup(ret + i + 1);
		free(tmp);
	}
	else
		ft_strclr(ret);
	return (ret);
}

int			get_next_line(const int fd, char **line)
{
	char		*b;
	static char	*ret[2147483647];
	int			nb_read;
	char		*adr_retour;
	char		*temp;

	if (fd < 0 || !(b = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)) || !line)
		return (-1);
	ret[fd] = ret[fd] == 0 ? ft_strdup("") : ret[fd];
	adr_retour = ft_strchr(ret[fd], 10);
	while (adr_retour == NULL && (nb_read = read(fd, b, BUFF_SIZE)) > 0)
	{
		b[nb_read] = '\0';
		temp = ret[fd];
		ret[fd] = ft_strjoin(ret[fd], b);
		free(temp);
		adr_retour = ft_strchr(ret[fd], 10);
	}
	if (nb_read < 0)
		return (-1);
	if (!*ret[fd] && nb_read < BUFF_SIZE)
		return (0);
	ret[fd] = ft_ret(ret[fd], line, adr_retour);
	free(b);
	return (1);
}
