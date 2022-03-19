#include <stdio.h>

void print_binary_int(int nb)
{
	int	nb_bits = sizeof(nb) * 8;
	while (nb_bits > 0)
	{
		printf("%d", nb >= 0 ? (nb >> (nb_bits - 1)) % 2 : -(nb >> (nb_bits - 1)) % 2);
		nb_bits--;
		if (nb_bits % 4 == 0 && nb_bits != 0)
			printf(" ");
	}
	printf("\n");
}

void print_binary_long(long nb)
{
	int	nb_bits = sizeof(nb) * 8;
	while (nb_bits > 0)
	{
		printf("%ld", nb >= 0 ? (nb >> (nb_bits - 1)) % 2 : -(nb >> (nb_bits - 1)) % 2);
		nb_bits--;
		if (nb_bits % 4 == 0 && nb_bits != 0)
			printf(" ");
	}
	printf("\n");
}

int main()
{
	print_binary_int(-1);
	print_binary_long(2147483647 + 2147483648);
}
