char	*ft_strrcpy(char	*dest, char	*src)
{
	int	c;
	
	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
