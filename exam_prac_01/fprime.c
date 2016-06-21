#include <stdio.h>
#include <math.h>

void	find_factors(int	n)
    {
	    int	i;
	    int separated;

	    i = 3;
	    separated = 0;
	    while (n % 2 == 0)
	    {
	        if (separated)
	            printf("*");
	       printf("%d", 2);
	       separated = 1;
		    n = n / 2;
	    }
	    while (i <= sqrt(n))
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
int main() {
	find_factors(2147483647);
	return 0;
}