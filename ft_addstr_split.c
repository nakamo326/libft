#include "libft.h"

/*
** add duplicated STR to split char LIST.
** if LIST is NULL, return new list includes two elements(str and null).
*/
char	**ft_addstr_split(char **list, const char *str)
{
	size_t	i;
	char	*new_str;

	new_str = ft_strdup(str);
	if (new_str == NULL)
		return (list);
	i = 0;
	if (list != NULL)
		while (list[i] != NULL)
			i++;
	list = ft_extend_split(list, i + 2);
	if (list == NULL)
		return (NULL);
	list[i] = new_str;
	list[i + 1] = NULL;
	return (list);
}
