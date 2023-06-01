#include<stdio.h>

fact(int n)
{
	int facto;
    if(n<=0)
    {
    	return 1;
	}
	else
	{
		facto=n*fact(n-1);
	}
	return facto;
}
main()
{
	int a,answ;
	printf("enter value A =");
	scanf("%d",&a);
	answ=fact(a);
	printf("factorial is = %d",answ);
}
