#include <stdio.h>
#include <stdlib.h>

void    find_factors(int n)
{
    int i;
    int separated;

    i = 3;
    if (n <= 1)
    	return ;
    separated = 0;
    while (n % 2 == 0)
    {
        if (separated)
            printf("*");
       printf("%d", 2);
       separated = 1;
        n = n / 2;
    }
    while (i <= n)
    {
        while(n % i == 0)
        {
            if (separated)
                printf("*");
            printf("%d", i);
            separated = 1;
            n = n / i;
        }
        i += 2;
    }
    if (n > 2)
    {
      if (separated)
            printf("*");
      printf("%d", n);
    }
}

int main(int ac, char **av)
{
	if (ac == 2)
		find_factors(atoi(av[1]));
	printf("\n");
	return 0;
}