#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,first,second,sum;
	printf("enter n :");
	scanf("%d",&n);
	second=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	first=n;
	sum=first+second;
	printf("%d",sum);
}
