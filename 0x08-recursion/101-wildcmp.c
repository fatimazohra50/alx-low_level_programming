#include "main.h"
/**
 * past_star - iterates past asterisk
 * @s2: value
 * Return: past star
 */
char *past_star(char *s2)
{
	if (*s2 == '*')
		return (past_star(s2 + 1));
	else
		return (s2);
}
/**
 * ifconfig - makes magic a reality
 * @s1: string
 * @s2: value
 * Return: 1 if identical, 0 if false
 */
int ifconfig(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += ifconfig(s1 + 1, s2);
	return (r);
}
/**
 * wildcmp - compares two strings lexicographically
 * @s1: string
 * @s2: value
 * Return: 1 if identical, 0if false
 */
int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += ifconfig(s1, s2);
		return (!!r);
	}
	return (0);
}
