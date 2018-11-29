#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <strings.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

#define BUFF_SIZE 10

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
char	*ft_strnew(size_t size)
{
	char	*new;

	new = malloc(size + 1);
	if (!new)
		return (NULL);
	bzero(new, size + 1);
	return (new);
}
char	*ft_strchr(const char *s, int c)
{
	char	*p_s;

	p_s = (char *)s;
	while (*p_s != '\0')
	{
		if (*p_s == c)
			return (p_s);
		p_s++;
	}
	if (c == '\0')
		return (p_s);
	return (NULL);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	longueur;
	char			*new;

	if (!s1 || !s2)
		return (NULL);
	longueur = strlen(s1) + strlen(s2);
	new = (char *)malloc(sizeof(char) * (longueur + 1));
	if (!new)
		return (NULL);
	new = strcpy(new, (char *)s1);
	new = strcat(new, (char *)s2);
	return (new);
}
void	ft_strdel(char **as)
{
	if (!as)
		return ;
	free(*as);
	*as = NULL;
}
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	unsigned char	*str;

	str = (unsigned char *)dest;
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	while (n != 0)
	{
		*p_dest++ = *p_src++;
		n--;
	}
	return (str);
}
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_lst;

	new_lst = (t_list *)malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	if (!content)
	{
		new_lst->content = NULL;
		new_lst->content_size = 0;
	}
	else
	{
		new_lst->content = malloc(sizeof(content_size));
		ft_memcpy(new_lst->content, content, content_size);
		new_lst->content_size = content_size;
	}
	new_lst->next = NULL;
	return (new_lst);
}
char	*ft_strdup(const char *s)
{
	char *pointeur;
	char *tab;

	tab = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!tab)
		return (NULL);
	pointeur = tab;
	while (*s)
		*pointeur++ = *s++;
	*pointeur = '\0';
	return (tab);
}
void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}

 int get_next_line(const int fd, char **line)
 {
	char			*c;
	char			*ret;
	static t_list	*test = ft_lstnew("", 0);

	if (fd < 0 || !(c = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	ret = ft_strnew(0);

	while((read(fd, c, BUFF_SIZE) > 0) && (ft_strchr(c, '\n') == NULL))
	{
		ret = ft_strjoin(ret, c);
		bzero(c, BUFF_SIZE);
	}
	if (ft_strchr(c, '\n') == NULL)
		ret = ft_strjoin(ret, ft_strsub(c, 0, strlen(c)));
	else
		ret = ft_strjoin(ret, ft_strsub(c, 0, ft_strchr(c, '\n') - c));
	*line = ret;

	ft_strdel(&c);
	ft_strdel(&ret);
	return (1);
}

int	main(int ac, char **av)
{
	char	*line = 0;
	if (ac > 1)
	{
		int fd;

		fd = open(av[1] ,O_RDONLY);
		get_next_line(fd, &line);
//		printf("%s\n", line);
	}
	return (0);
}