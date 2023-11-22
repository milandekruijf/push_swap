/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   getline.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: muijf <muijf@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 00:56:12 by muijf         #+#    #+#                 */
/*   Updated: 2023/11/22 01:21:33 by muijf         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char	*get_first_line(char *s)
{
	int	slen;
	int	llen;
	int	i;

	llen = 0;
	slen = ft_strlen(s);
	i = 0;
	while (i < slen)
	{
		llen++;
		if (s[i] == '\n')
			break ;
		i++;
	}
	if (llen == 0)
		return (NULL);
	return (ft_strsub(s, 0, llen));
}

static char	*read_from_fd(int fd, char *rem)
{
	int		bytes;
	char	*buf;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes = read(fd, buf, BUFFER_SIZE);
	while (bytes > 0)
	{
		buf[bytes] = '\0';
		rem = ft_strjoin(rem, buf);
		if (!rem || ft_strchr(rem, '\n'))
			break ;
		bytes = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	if (!rem || bytes == -1 || ft_strlen(rem) == 0)
	{
		free(rem);
		return (NULL);
	}
	return (rem);
}

char	*ft_getline(int fd)
{
	static char	*rem[1024];
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!rem[fd])
		rem[fd] = ft_strdup("");
	rem[fd] = read_from_fd(fd, rem[fd]);
	if (!rem[fd])
		return (NULL);
	line = get_first_line(rem[fd]);
	if (!line)
		return (NULL);
	tmp = ft_strsub(rem[fd], ft_strlen(line), ft_strlen(rem[fd]));
	free(rem[fd]);
	rem[fd] = tmp;
	if (!rem[fd])
		return (NULL);
	return (line);
}
