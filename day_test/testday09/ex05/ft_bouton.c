#include <stdio.h>

int		ft_bouton(int i, int j, int k)
{
	if(j >= i && j <= k)
		return (j);
	else if (j < i)
		j = ft_bouton(j, i, k);
	else if(j > k)
		j = ft_bouton(i, k, j);
	return(j);
}

int main()
{
	printf("%d", ft_bouton(12,7,9));
	return (0);
}
