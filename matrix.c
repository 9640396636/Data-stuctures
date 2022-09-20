#include <stdio.h>
int main()
{
	int x,y,c,d,first[10][10],second[10][10],sum[10][10];
	printf("enter the number of rows and columns of matrix\n");
	scanf("%d %d",&x,&y);
	printf("enter the elements of first matrix\n");
	for(c = 0; c < x; c++); 
	for(d = 0; d < y; d++);
	scanf("%d", &first[c][d]);
	printf("enter the elements of second matrix\n");
	for(c = 0; c < x; c++)
		for(d = 0 ; d < y; d++)
		   scanf("%d",&second[c][d]);
	printf("sum of entered matrices:-\n");
	for (c = 0; c < x; c++){
		for (d = 0 ; d < y; d++) {
			sum[c][d] = first[c][d] + second[c][d];
			printf("%d\t", sum[c][d]);
		}
		printf("\n");
	}
		return 0;
	}
				
		