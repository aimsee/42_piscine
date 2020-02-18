char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while(str[i])
	{
		if(str[i] == to_find[j])
		{
			while(str[i + j] == to_find[j])
				j++;
			if(to_find[j] == '\0')
				return(&str[i]);
		}
		i++;
	}
	return(0);
