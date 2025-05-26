#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		seen[128];

	if (argc == 3)
	{
		i = 0;
		while (i < 128)
			seen[i++] = 0;
		i = 0;
		while (argv[1][i])
		{
			if (seen[(int)argv[1][i]] == 0)
				seen[(int)argv[1][i]] = 1;
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (seen[(int)argv[2][i]] == 0)
				seen[(int)argv[2][i]] = 1;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (seen[(int)argv[1][i]] == 1)
			{
				write(1, &argv[1][i], 1);
				seen[(int)argv[1][i]] = 0;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
        {
            if (seen[(int)argv[2][i]] == 1)
            {
                write(1, &argv[2][i], 1);
                seen[(int)argv[2][i]] = 0;
            }
            i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
