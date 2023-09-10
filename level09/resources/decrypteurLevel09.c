#include <stdio.h>

int main(int argc, char **argv)
{

	int i = 1;
	unsigned int hex;
	while (argv[i])
	{
		sscanf(argv[i], "%x", &hex);
		printf("%c", hex - i + 1);
		i++;
	}
	printf("\n");
	return 0;	
}

