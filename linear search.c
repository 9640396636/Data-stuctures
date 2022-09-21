#include <stdio.h>

int main()
{
	int a[20],i,x,n
	printf("How many elements?");
	scanf("%d",&n);
	printf("enter array elements : n");
	for(i=0;i<n;++i)
	    scanf("%d",&a[i]);
	printf("nenter elements to search: ");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	   if (a[i]==x)
	if (i<n)
	    printf("elements found at index %d",i);
	else
	    printf("elements not found");
	return 0;
}


