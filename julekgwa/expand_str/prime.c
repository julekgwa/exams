int   ft_is_prime(int nb)
{
  int   i;

  i = 2;
  if (nb <= 1)
    return (0);
  while (i <= (nb / 2))
  {
    if (nb % i == 0)
      return (0);
    i++;
  }
  return (1);
}
#include <stdio.h>
int main()
{
  int n = 1037;
  int i = 0;
  int sum;
  while (i <= n)
  {
    if (ft_is_prime(i))
      sum += i;
    i++;
  }
  printf("%d\n", sum);
  return 0;
}