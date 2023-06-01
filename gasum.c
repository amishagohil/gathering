#include<stdio.h>

array(int n[],int n1)
{
	int i,sum=0;
	
	for(i=0;i<=n1;i++)
    {
    	sum=sum+n[i];
	}
	printf("sum =%d",sum);
}
main()
{
	int a[100];
	int n,i,sum=0;
	printf("enter size of =");
	scanf("%d",&n);
	printf("enter array elements=\n");
	for(i=0;i<=n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
    {
    	printf("%d",&a[i]);
	}

    array(a,n);

}
