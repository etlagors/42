#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

#include "libft.h"
char	*proxy_strnstr(const char *s, const char *find, size_t slen);
void	ft_putch(char c);
void	ft_print_words_tables(char **tab);
char	**ft_split_whitespaces(char *str);
void	ft_s(char *ptr);
void	iti_test(unsigned int i, char *c);
char	map_test(char c);
char	mapi_test(unsigned int i, char c);
void	del_test(void *data, size_t i);


int main ()
{
	char src_mine[50] = "Ceci est un putain de test";
	char src_og[50] = "Ceci est un putain de test";
	char dest_mine[50] = "";
	char dest_og[50] = "";

//  memset
//	ft_memset(src_mine,'-',10);
//	memset(src_og,'-',10);
//	printf("src_mine :\n%s\n src_og : \n%s\n", src_mine, src_og);

//  bzero
//    printf("Avant : src_mine :\n%s\n src_og : \n%s\n\n", src_mine, src_og);
//    ft_bzero(src_mine, 1);
//    bzero(src_og, 1);
//    printf("Après : src_mine :\n%s\n src_og : \n%s\n", src_mine, src_og);

//  memcpy
//    ft_memcpy(dest_mine, src_mine, 30);
//    memcpy(dest_og, src_og, 30);
//    printf("dest_mine :\n%s\ndest_og :\n%s\n", dest_mine, dest_og);

//  memccpy
//    printf("%p\nog :\n%s\n----------------------- \n",  memccpy(dest_og, src_og,'t', 8), dest_og);
//    bzero(dest_og, strlen(dest_og));
//    printf("%p\nmine :\n%s\n", ft_memccpy(dest_og, src_og,'t', 8), dest_og);

//  memmove
//    ft_memmove(dest_mine, src_mine, 30);
//    memmove(dest_og, src_og, 30);
//    printf("dest_mine :\n%s\ndest_og :\n%s\n", dest_mine, dest_og);

//  memchr
//	char	c = '!';
//    printf("octet og :%p\nreste de la string : %s\n", memchr(src_og, c, 30), (char *)memchr(src_og, c, 30));
//    printf("---------\n");
//    printf("octet og :%p\nreste de la string : %s\n", ft_memchr(src_og, c, 30), (char *)ft_memchr(src_og, c, 30));

//  memcmp
//    char    src[50] = "Ceci est un Putain";
//    printf("og : %d\n", memcmp(src_og, src, 100));
//    printf("mine : %d\n", ft_memcmp(src_og, src, 100));

//  strlen
//    printf("og : %d\n", (int)strlen(src_mine));
//    printf("mine : %d\n", (int)ft_strlen(src_mine));

//  strdup
//	printf("og : %s\n", strdup(src_mine));
//	printf("mine : %s\n", ft_strdup(src_mine));

//  strcpy
//	printf("og : %s\n", strcpy(dest_og, src_mine));
//	printf("mine : %s\n", ft_strcpy(dest_mine, src_mine));

//  strncpy
//	printf("og : %s\n", strncpy(dest_og, src_mine, 28));
//	printf("mine : %s\n", ft_strncpy(dest_mine, src_mine, 28));

//  strcat
//	char cat_min[50] = " t'a vu";
//	printf("Avec les deux string pleine :\n");
//	printf("mine : %s\n", ft_strcat(src_mine, cat_min));
//	printf("og : %s\n\n", strcat(src_og, cat_min));
//	char a[10] = "";
//	char b[50] = "Ceci est un putain de test";
//	char c[50] = "Ceci est un putain de test";
//	printf("Avec les deux s1 vide :\nmine : %s\n", ft_strcat(b, a));
//	printf("og : %s\n\n", strcat(c, a));
//	char x[10] = " t'a vu";
//	char y[50] = "";
//	char z[50] = "";
//	printf("Avec les deux s2 vide :\nmine : %s\n", ft_strcat(y, x));
//	printf("og : %s\n", strcat(z, x));

//  strncat
//	int 	n = 15;
//	char cat_min[50] = " t'a vu";
//	printf("Avec les deux string pleine avec n = %d:\n", n);
//	printf("mine : %s\n", ft_strncat(src_mine, cat_min, n));
//	printf("og : %s\n\n", strncat(src_og, cat_min, n));
//	char a[10] = "";
//	char b[50] = "Ceci est un putain de test";
//	char c[50] = "Ceci est un putain de test";
//	printf("Avec les deux s1 vide avec n = %d:\nmine : %s\n", n, ft_strncat(b, a, n));
//	printf("og : %s\n\n", strncat(c, a, n));
//	char e[10] = " t'a vu";
//	char f[50] = "";
//	char g[50] = "";
//	printf("Avec les deux s2 vide avec n = %d:\nmine : %s\n", n,ft_strncat(f, e, n));
//	printf("og : %s\n", strncat(g, e, n));

//	strlcat
//	char cat_min[50] = " t'a vu";
//	int  n = 49;
//	printf("Avec size = %d\nog : %d\n", n, (int)strlcat(src_og, cat_min, n));
//	printf("mine : %d\n", (int)ft_strlcat(src_mine, cat_min, n));

//	strchr
//	const char str[] = "htest1p://www.tutorialspoint.com";
//	const char ch = '.';
//	const char nul = '!';
//	char	*ret;
//	char	*mine;
//	ret = strchr(str, ch);
//	mine = ft_strchr(str, ch);
//	printf("Avec c present\nold : String after |%c| is - |%s|\n", ch, ret);printf("mine : String after |%c| is - |%s|\n\n", ch, mine);
//	ret = strchr(str, nul);
//	mine = ft_strchr(str, nul);
//	printf("avec c non-present\nold : String after |%c| is - |%s|\n", nul, ret);printf("mine : String after |%c| is - |%s|\n\n", nul, mine);
//	const char str_nul[] = "";
//	ret = strchr(str_nul, ch);
//	mine = ft_strchr(str_nul, ch);
//	printf("avec str nul\nold : String after |%c| is - |%s|\n", ch, ret);printf("mine : String after |%c| is - |%s|\n", ch, mine);

//	strrchr
//	const char str[] = "htest1ph://www.tutorialspoint.com";
//	const char ch = 'h';
//	char *ret;
//	char *mine;
//	ret = strrchr(str, ch);
//	mine = ft_strrchr(str, ch);
//	printf("old : String after |%c| is - |%s|\n", ch, ret);
//	printf("mine : String after |%c| is - |%s|\n", ch, mine);

//	strstr
//	const char haystack[20] = "TutorialsPoint";
//	const char needle[10] = "Point";
//	char *ret;
//	char *mine;
//	ret = strstr(haystack, needle);
//	mine = ft_strstr(haystack, needle);
//	printf("Avec occurance presente :\nold : The substring is: %s\n", ret);
//	printf("mine : The substring is: %s\n\n", mine);
//	const char haystack2[25] = "PoTutorialsPoint";
//	ret = strstr(haystack2, needle);
//	mine = ft_strstr(haystack2, needle);
//	printf("Avec occurance partiellement presente puis completement :\nold : The substring is: %s\n", ret);
//	printf("mine : The substring is: %s\n\n", mine);
//	const char haystack3[25] = "Po";
//	ret = strstr(haystack3, needle);
//	mine = ft_strstr(haystack3, needle);
//	printf("Avec non-occurance presente :\nold : The substring is: %s\n", ret);
//	printf("mine : The substring is: %s\n", mine);

//	strnstr
//	const char haystack[20] = "TutorialsPoint";
//	const char needle[10] = "Point";
//	char *ret;
//	char *mine;
//	ret = strstr(haystack, needle);
//	mine = ft_strstr(haystack, needle);
//	int 	n = 50;
//	printf("Avec occurance presente et n = %d:\nold : The substring is: %s\n",n , ret);
//	printf("mine : The substring is: %s\n\n", mine);
//	const char haystack2[25] = "PoTutorialsPoint";
//	ret = strstr(haystack2, needle);
//	mine = ft_strstr(haystack2, needle);
//	printf("Avec occurance partiellement presente puis completement et n = %d:\nold : The substring is: %s\n",n , ret);
//	printf("mine : The substring is: %s\n\n", mine);
//	const char haystack3[25] = "Po";
//	ret = strstr(haystack3, needle);
//	mine = ft_strstr(haystack3, needle);
//	printf("Avec non-occurance presente et n = %d:\nold : The substring is: %s\n",n ,ret);
//	printf("mine : The substring is: %s\n", mine);
//			char	*s1 = "oh no not the empty string !";
//			char	*s2 = "";
//			size_t	max = strlen(s1);
//
//	char	*i1 = strnstr(s2, s1, max);
//	char	*i2 = ft_strnstr(s2, s1, max);
//	printf("%s\n%s", i1, i2);

//	strcmp
//	char str1[15] = "ABCDEF";
//	char str2[15] = "ABCDEF";
//	printf("Les chaines sont egale :\nold : %d\n", strcmp(str1, str2));
//	printf("mine : %d\n", ft_strcmp(str1, str2));
//	char str3[15] = "ABcDEF";
//	printf("Les chaines sont ne sont pas egale :\nold : %d\n", strcmp(str1, str3));
//	printf("mine : %d\n", ft_strcmp(str1, str3));

//	strncmp
//	char str1[15] = "ABCDEF";
//	char str2[15] = "ABCDEF";
//	int  n = 3;
//	printf("Les chaines sont egale avec n = %d :\nold : %d\n", n, strcmp(str1, str2));
//	printf("mine : %d\n\n", ft_strcmp(str1, str2));
//	char str3[15] = "ABcDEF";
//	printf("Les chaines sont ne sont pas egale avec n = %d :\nold : %d\n", n, strcmp(str1, str3));
//	printf("mine : %d\n", ft_strcmp(str1, str3));

//	atoi
//	const char n[50] = "2147483648";
//	printf("old : %d\n", atoi(n));
//	printf("mine : %d\n", ft_atoi(n));

//	isalpha
//	int n = 900;
//	printf("old : %d\n", isalpha(n));
//	printf("mine : %d\n\n", ft_isalpha(n));

//	isdigit
//	int n = 45;
//	printf("old : %d\n", isdigit(n));
//	printf("mine : %d\n", ft_isdigit(n));

//	isalnum
//	int n = -3;
//	while (n < 130)
//	{
//		printf("%d : %d - %d\n", n, isalnum(n), ft_isalnum(n));
//		n++;
//	}

//	isascii
//	int n = -3;
//	while (n < 130)
//	{
//		printf("%d : %d - %d\n", n, isascii(n), ft_isascii(n));
//		n++;
//	}

//  isprint
//   int n = -3;
//   while (n < 130)
//   {
//		printf("%d : %d\n", n, isprint(n));
//		printf("%d : %d\n", n, ft_isprint(n));
//		n++;
//   }

//  ft_toupper
//	int n = 90;
//	while (n < 130)
//	{
//		printf("%d : %d - %d\n", n, ft_toupper(n), toupper(n));
//		n++;
//	}

//  ft_tolower
//	int n = 60;
//	while (n < 100)
//	{
//		printf("%d : %d - %d\n", n, ft_tolower(n), tolower(n));
//		n++;
//	}

//	ft_memalloc
//	 char	*test;
//	 test = ft_memalloc(7);

//	ft_memdel
//	 void **test;
//	 test[0] = "ceci est un putain de test";
//	 ft_memdel(test);

//	ft_strnew
//   char	*capu;
//   capu = ft_strnew(8);

//	ft_strdel
//	 char	**test;
//	 char	abby[50] = "ceci est un putain de test";
//	 test = ft_split_whitespaces(abby);
//	 ft_print_words_tables(test);
//   ft_strdel(test);
//   ft_putch('\n');
//   ft_print_words_tables(test);

//  ft_strclr
//	 char	test[50] = "ceci est un test";
//	 printf("avant : %s\n", test);
//	 ft_strclr(test);
//   printf("après : %s\n", test);

//  ft_striter
// 	 char	test[50] = "ceci est un test";
//   printf("avant : %s\n", test);
//   ft_striter(test, ft_s);
//	 printf("apres : %s\n", test);

//  ft_striteri
//	char	test[50] = "abcde";
//	printf("avant : %s\n", test);
//	ft_striteri(test, iti_test);
//	printf("apres : %s\n", test);

//  ft_strmap
//    char test[10] = "abcde";
//    printf("avant : %s\n", test);
//    printf("apres : %s\n", ft_strmap(test, map_test));

//  ft_strmapi
//    char test[10] = "abcde";
//    printf("avant : %s\n", test);
//    printf("apres : %s\n", ft_strmapi(test, mapi_test));

// ft_strequ
//    printf("%d\n", ft_strequ("abcDEF", "abcDEf"));

// ft_strnequ
//    printf("%d\n", ft_strnequ("abcde", "abdde", 5));

// ft_strsub
//    char    test[50] = "ceci est un putain de test";
//    printf("%s\n", ft_strsub(test, 8, 8));

//  ft_strjoin
//    char    *test;
//    test = ft_strjoin("abc", "def");
//    printf("result : %s\n", test);

//  ft_strtrim
	char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char	*s2 = "Hello \t  Please\n Trim me !";
	char	*ret = ft_strtrim(s1);
	printf("%d\n", strcmp(s2, ret));
	printf("%s\n", ret);
//  ft_strsplit
//	char	**test1 = ft_strsplit("***salut****!**", '*');
//	printf("%d - doit etre egale a 0\n", strcmp(test1[0], "salut"));
//	printf("%d - doit etre egale a 0\n", strcmp(test1[1], "!"));
//	char    **test2 = ft_strsplit("*****", '*');
//	printf("%s\n", test2[0]);
//	char    **test3 = ft_strsplit("coucou", '*');
//	printf("%d - doit etre egale a 0\n", strcmp(test3[0], "coucou"));

//  ft_itoa
//	printf("%d - doit etre egale a 0\n", strcmp(ft_itoa(0), "0"));
//	printf("%s - doit etre egale a %s\n", ft_itoa(0), "0");
//	printf("%d - doit etre egale a 0\n", strcmp(ft_itoa(-1234), "-1234"));
//	printf("%s - doit etre egale a %s\n", ft_itoa(-1234), "-1234");
//	printf("%d - doit etre egale a 0\n", strcmp(ft_itoa(123456000), "123456000"));
//	printf("%s - doit etre egale a %s\n", ft_itoa(123456000), "123456000");
//	printf("%d - doit etre egale a 0\n", strcmp(ft_itoa(-2147483648), "-2147483648"));
//	printf("%s - doit etre egale a %s\n", ft_itoa(-2147483648), "-2147483648");

// ft_putchar
//    ft_putchar('a');
//    ft_putchar('b');
//    ft_putchar('c');
//    ft_putchar('\n');

// ft_putstr
//    ft_putstr("ceci est un putain de test");

// ft_putendl
//    ft_putendl("ceci est un putain de test");

//  ft_putnbr
//    ft_putnbr(67890);

// ft_putchar_fd
//    ft_putchar_fd('a', 1);
//    ft_putchar_fd('b', 1);
//    ft_putchar_fd('c', 1);
//    ft_putchar_fd('\n', 1);

// ft_putstr_fd
//    ft_putstr_fd("ceci est un putain de test\n", 1);

// ft_putendl_fd
//    ft_putendl_fd("ceci est un putain de test", 1);

//  ft_putnbr_fd
//    ft_putnbr_fd(67890, 1);
//    ft_putchar('\n');
//    ft_putnbr_fd(-67890, 1);
//    ft_putchar('\n');

//  ft_lstnew
//    char    c[50] = "ceci est un putain de test";
//    t_list  *new = ft_lstnew(c, 27);
//    printf("content : %s\n", (char *)new->content);
//    printf("content_size : %d\n", (int)new->content_size);

//  ft_lstdelone
//    int    ft = 42;
//    int   diddel;
//    t_list *new = ft_lstnew(&ft, sizeof(int));
//	UT_ASSERT_EQ((*(int*)(new->content)), 42);
//	ft_lstdelone(&new, del_test);
//	UT_ASSERT_EQ(new, NULL);

//  ft_lstdel
//	t_list	*list;
//	int	ft = 42;
//	int diddel = 0;
//	list = malloc(sizeof(t_list));
//	bzero(list, sizeof(t_list));
//	list->next = malloc(sizeof(t_list));
//	bzero(list->next, sizeof(t_list));
//	list->content = &ft;
//	list->next->content = (&ft) + 1;
//	ft_lstdel(&list, del_test);
//	UT_ASSERT_EQ(list, NULL);
//	UT_ASSERT_EQ(diddel, 2);

	return (0);
}

void	del_test(void *data, size_t i)
{
	int     diddel;
	(void)data;
	(void)i;
	diddel++;
}

char	mapi_test(unsigned int i, char c)
{
	return (c + i);
}

char	map_test(char c)
{
	return (c + 1);
}

void	iti_test(unsigned int i, char *c)
{
	*c = *c + i;
}

void	ft_s(char *ptr)
{
	*ptr++ = 's';
}

char *proxy_strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

void    ft_putch(char c)
{
	write(1, &c, 1);
}

void ft_print_words_tables(char **tab)
{
	int a;
	int b;
	a = 0;
	while(tab[a])
	{
		b = 0;
		while(tab[a][b])
		{
			ft_putch(tab[a][b]);
			b++;
		}
		ft_putch('\n');
		a++;
	}
}

int     count_word(char *str)
{
	int nb;
	char *pointeur;

	pointeur = str;
	nb = 0;

	while(*pointeur)
	{
		while(*pointeur && (*pointeur == ' ' || *pointeur == '\t' || *pointeur == '\n'))
			pointeur++;
		if(*pointeur && *pointeur != ' ' && *pointeur != '\t' && *pointeur != '\n')
		{
			nb++;
			while(*pointeur && *pointeur != ' ' && *pointeur != '\t' && *pointeur != '\n')
				pointeur++;
		}
	}
	return(nb);
}

char *ft_strdup_(char *str)
{
	char *pointeur;
	char *tab;
	int longueur;

	longueur = 0;
	pointeur = str;
	while(*pointeur && *pointeur != ' ' && *pointeur != '\t' && *pointeur != '\n')
	{
		pointeur++;
		longueur++;
	}
	tab = (char *)malloc(sizeof(str) * (longueur + 1));
	if(!tab)
		return(NULL);
	pointeur = tab;
	while(*str && *str != ' ' && *str != '\t' && *str != '\n')
	{
		*pointeur++ = *str++;
	}
	*pointeur = '\0';
	return(tab);
}

char **ft_split_whitespaces(char *str)
{
	char **tab;
	char *pointeur;
	int size;
	int cntr;
	cntr = 0;
	size = count_word(str);
	tab = (char **)malloc(sizeof(str) * (size + 1));
	if(!tab)
		return(NULL);
	pointeur = str;
	while(*pointeur)
	{
		while(*pointeur && (*pointeur == ' ' || *pointeur == '\t' || *pointeur == '\n'))
			pointeur++;
		if(*pointeur && *pointeur != ' ' && *pointeur != '\t' && *pointeur != '\n')
		{
			tab[cntr++] = ft_strdup_(pointeur);
			while(*pointeur && *pointeur != ' ' && *pointeur != '\t' && *pointeur != '\n')
				pointeur++;
		}
	}
	tab[cntr] = NULL;
	return(tab);
}