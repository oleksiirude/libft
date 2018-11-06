/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olrudenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:54:13 by olrudenk          #+#    #+#             */
/*   Updated: 2018/11/06 18:08:42 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*--------------------------------------------------------------------------------*/
/*   <---PART ONE--->   */
/*--------------------------------------------------------------------------------*/

/*ft_memset*/
/*int	main(void)
{
	char b[7] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	int b[2] = { 999, 2 };
	ft_memset(b, 'E', 1);
	memset(b, 'E', 1);
	printf("my -> %s\n", b);
	printf("or -> %s\n", b);
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_bzero*/
/*int		main(void)
{	
	char b[7] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	int b[2] = { 999, 2 };
	ft_bzero(b, 1);
	bzero(b, 0);
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_memcpy*/
/*int		main(void)
{
	char src[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char dst[6];
	printf("my -> %d\n", ft_memcpy(dst, src, 1));
	printf("or -> %d\n", memcpy(dst, src, 1));
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_memccpy*/
/*int		main(void)
{
	char src[18] = "Winter is coming!";
	char dst[18] = "Hello";
	char src1[18] = "Winter is coming!";
	char dst1[18] = "Hello";
	printf("my -> %s\n", ft_memccpy(dst, src, 'n', 18));
	printf("or -> %s\n", memccpy(dst1, src1, 'n', 18));
	printf("%c\n", dst[15]);
	printf("%c\n", dst1[15]);
	printf("after my -> %s\n", dst);
	printf("after or -> %s\n", dst1);
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_memmove*/
/*int		main(void)
{
	char src[20] = "12345";
	char srcc[20] = "12345";
	ft_memmove(&src[2], &src[1], 3);
	memmove(&srcc[2], &srcc[1], 3);
	printf("my -> %s\n", src);
	printf("or -> %s\n", srcc);
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_memchr*/
/*int		main(void)
{
	char s[200] = "Alabama qwertyuiop[sdfghj xcvbn z";
	char sc[200] = "Alabama qwertyuiop[sdfghj xcvbn z";
	printf("my -> %s\n", ft_memchr(s, 'q', 30));
	printf("or -> %s\n", memchr(sc, 'q', 30));
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_memcmp*/

/*int	main(void)
{
	char s1[14] = "Made \200 China";
	char s2[14] = "Made \0 China";
	char s11[14] = "Made \200 China";
	char s22[14] = "Made \0 China";
	printf("my -> %d\n", ft_memcmp(s1, s2, 14));
	printf("or -> %d\n", memcmp(s11, s22, 14));
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_strlen*/

/*int	main(void)
{
	char *s = "This string have some lenght";
	printf("my -> %llu\n", ft_strlen(s));
	printf("or -> %llu\n", strlen(s));
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_strdup*/

/*int	main(void)
{
	char *s1 = "Washington is the capital of United States of America";
	printf("my -> %s\n", ft_strdup(s1));
	printf("or -> %s\n", strdup(s1));
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_strcpy*/

/*int	main(void)
{
	char *src = "Happy New Year, Motherfucker!";
	char dst[30];
	char *src1 = "Happy New Year, Motherfucker!";
	char dst1[30];
	printf("my -> %s\n", ft_strcpy(dst, src));
	printf("or -> %s\n", strcpy(dst1, src1));
	
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_strncpy*/

/*int	main(void)
{
	char *src = "1234567";
	char dst[30];
	char *src1 = "1234567";
	char dst1[30];
	printf("my -> %s\n", ft_strncpy(dst, src, 10));
	printf("or -> %s\n", strncpy(dst1, src1, 10));
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_strcat*/

/*int	main(void)
{
	char s1[100] = "Hello ";
	char *s2 = "World!";
	char s11[100] = "Hello ";
	char *s22 = "World!";
	printf("my -> %s\n", ft_strcat(s1, s2));
	printf("or -> %s\n", strcat(s11, s22));
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_strncat*/

/*int	main(void)
{
	char s1[100] = "Hello ";
	char *s2 = "World!";
	char s11[100] = "Hello ";
	char *s22 = "World!";
	printf("my -> %s\n", ft_strncat(s1, s2, 17));
	printf("or -> %s\n", strncat(s11, s22, 17));
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_strlcat*/

/*int	main(void)
{
	char dst[13] = "12345";
	char *src = "789";
	char dst1[13] = "12345";
	char *src1 = "789";
	printf("my -> %zu\n", ft_strlcat(dst, src, 5));
	printf("or -> %zu\n", strlcat(dst1, src1, 5));
	printf("my dst after applying -> %s\n", dst);
	printf("or dst after applying -> %s\n", dst1);
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_strchr & ft_strrchr*/

/*int	main(void)
{
	char *s = "C'mon let's do this qsh\0it";
	printf("my -> %s\n", ft_strrchr(s, 'q'));
	printf("or -> %s\n", strrchr(s, 'q'));
	return (0);
}*/

/*--------------------------------------------------------------------------------*/
/*ft_strstr*/
/*int	main(void)
{
	char *haystack = "MZIRIBMZIRIBMZP";
	char *needle = "MZIRIBMZP";*/
	/*char *haystack = "FF";
	char *needle = "see FF your FF return FF now FF";*/
	/*char *haystack = "AAAAAAAAAAAAA";*/
	/*char *haystack = "aaabbbaaabbb";
	char *needle = "abbaaab";
	printf("my -> %s\n", ft_strstr(haystack, needle));
	printf("or -> %s\n", strstr(haystack, needle));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_strnstr*/

/*int	main(void)
{
	char *haystack = "baba haha haha";
	char *needle = "ha";
	printf("my -> %s\n", ft_strnstr(haystack, needle, 7));
	printf("or -> %s\n", strnstr(haystack, needle, 7));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_strcmp*/

/*int	main(void)
{
	char *s1 = "abc2cE";
	char *s2 = "x";
	printf("my -> %d\n", ft_strcmp(s1, s2));
	printf("or -> %d\n", strcmp(s1, s2));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_strncmp*/

/*int	main(void)
{
	char *s1 = "Hel1o World!";
	char *s2 = "Hello World!";
	printf("my -> %d\n", ft_strncmp(s1, s2, 3));
	printf("or -> %d\n", strncmp(s1, s2, 3));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_atoi*/

/*int	main(void)
{
	char *str = "			92233 2123123 o1k3o k1o2k3 o12k3k1ko1 k";
	printf("my -> %d\n", ft_atoi(str));
	printf("or -> %d\n", atoi(str));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_isalpha*/

#include <ctype.h>

/*int	main(void)
{
	printf("my -> %d\n", ft_isalpha('&'));
	printf("or -> %d\n", isalpha('&'));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_isdigit*/

/*#include <ctype.h>

int	main(void)
{
	printf("my -> %d\n", ft_isdigit(2));
	printf("or -> %d\n", isdigit(2));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_isalnum*/

/*#include <ctype.h>

int	main(void)
{
	printf("my -> %d\n", ft_isalnum('&'));
	printf("or -> %d\n", isalnum('&'));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_isascii*/

/*#include <ctype.h>

int main(void)
{
	printf("my -> %d\n", ft_isascii(128));
	printf("or -> %d\n", isascii(128));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_isprint*/

/*#include <ctype.h>

int	main(void)
{
	printf("my -> %d\n", ft_isprint(1));
	printf("or -> %d\n", isprint(1));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_toupper*/

/*#include <ctype.h>

int	main(void)
{
	printf("my -> %d\n", ft_toupper('1'));
	printf("or -> %d\n", toupper('1'));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_tolower*/

/*#include <ctype.h>

int	main(void)
{
	printf("my -> %d\n", ft_tolower('A'));
	printf("or -> %d\n", tolower('A'));
	return (0);
}*/

/*--i-------------------------------------------------------------------------------*/
/*   <---PART TWO--->   */
/*---------------------------------------------------------------------------------*/

/*ft_memalloc.c*/

/*int	main(void)
{
	size_t size;

	size = 23764876;
	ft_memalloc(size);
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_memdel.c*/

/*int	main(void)
{
	void *ap = "hello";
	printf("before %s\n", ap);
	ft_memdel(ap);
	printf("after %s\n", ap);
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_strnew*/
/*int	main(void)
{
	printf("string -> %s\n", ft_strnew(10));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_striter*/

/*void	ft_a(char *s);

int	main(void)
{
	char s[] = "School 42";
	ft_striter(s, &ft_a);
	printf("after -> %s\n", s);
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_striteri*/

/*int	main(void)
{
	char s[] = "School 42";
	ft_striter(s, &ft_a);
	printf("after -> %s\n", s);
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_strmap*/

/*char	ft_a(char s);

int	main(void)
{
	const char s[] = "School 42";
	printf("after -> %s\n", ft_strmap(s, &ft_a));
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_strequ*/

/*int	main(void)
{
	char *s1 = "Hello World!!!";
	char *s2 = "Hello World!!!";
	printf("res -> %d\n", ft_strequ(s1, s2);
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_strsub*/

/*int	main(void)
{
	char *s = "You should do something to get someone!";
	printf("after -> %s\n", ft_strsub(s, 4, 9)); 
	return (0);
}*/

/*---------------------------------------------------------------------------------*/
/*ft_strjoin*/

int	main(void)
{
	char *s1 = "Hello, my ";
	char *s2 = "name is Oleksii";
	printf("after concatenation -> %s\n", ft_strjoin(s1, s2));
	return (0);
}
/*---------------------------------------------------------------------------------*/
