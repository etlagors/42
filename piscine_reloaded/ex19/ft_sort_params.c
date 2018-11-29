/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:28:01 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/06 13:34:17 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_swap(char **a, char **b)
{
	char	*saver;

	saver = *a;
	*a = *b;
	*b = saver;
}

int		main(int argc, char **argv)
{
	int		cntr;

	cntr = 1;
	if (argc != 1)
	{
		while (cntr < argc - 1)
		{
			while (ft_strcmp(argv[cntr], argv[cntr + 1]) > 0)
			{
				ft_swap(&argv[cntr], &argv[cntr + 1]);
				cntr = 1;
			}
			cntr++;
		}
		cntr = 1;
		while (cntr < argc)
		{
			ft_putstr(argv[cntr]);
			ft_putchar('\n');
			cntr++;
		}
	}
	return (0);
}
