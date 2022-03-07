char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int c;
	
	c = 0;
	while((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
