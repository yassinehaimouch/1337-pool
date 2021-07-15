#include <unistd.h>
char ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i;
	i = 0;
	
	if(argc == 1)
	{
		while(argv[0][i])
		{
			ft_putchar(i);
			i++;
		}
		return (0);
	}
}
