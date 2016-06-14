#include <stdio.h>
#include <stdlib.h>

int n;

int *rrange(int start, int end)
{
    int *range;
    int i;

    if(start>end)
        return rrange(end,start); //so that start is always <end

    n=end-start+1; // n globally declared 

    range=malloc(n*sizeof(int)); //casting is not required
    if(range==NULL)
        printf("fail");

    for(i=0;i<n;i++,start++)
    {
        range[i]=start;
    }

    return range;
}

int main() 
{
	int numb_range;
    int i;
    int start;
    int end;
    int *numbers;

    i = 0;
    start = 2147483647;
    end = 2147483640;
    if (end > start)
        numb_range = end - start + 1;
    else
        numb_range = start - end;
    // numbers = (int *)malloc(sizeof(int) * numb_range);
    numbers = rrange(start, end);
    while (i <= numb_range)
        printf("%d |", numbers[i++]);
	return 0;
}