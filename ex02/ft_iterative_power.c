#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 1)
		result *= nb;
	return (result);
}
int	ft_iterative_power(int nb, int power);

int main(){
	int n = ft_iterative_power(-3, 2);
	printf("%i\n", n);
}
