#include <stdio.h>
#include "sum.h"

int main()
{
	int n , temp;
	printf("integer input : ");
	scanf("%d",&n);
	temp = sum(n);
	printf("1~100 %d \n", temp);
	return 0;
}

