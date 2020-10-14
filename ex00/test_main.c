#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage ./a.out str");
		return (1);
	}
	char str[100];
	strcpy(str, argv[1]);
	printf("strlen(%s) : %d", str, ft_strlen(str));
}
