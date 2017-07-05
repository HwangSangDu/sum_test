#include <stdio.h>

int sum(int n)
{	
	int i,sum = 0;

	for(i = 0 ; i < n ; i ++)
		sum += n;
	printf("%d\n",sum);
	return sum;

}
