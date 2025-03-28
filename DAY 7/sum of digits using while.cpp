#include <stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while (n!=0)
	{
		s=s+(n%10);
		n=n/10;
	}
	printf("the sum of the digits of the number = %d",s);
	return 0;
}
