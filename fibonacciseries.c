#include<stdio.h>
int m=1,n=1;
int rec(int x)
{
    int c,i;
    c=m+n;
    m=n;
    n=c;
    printf("%d ",c);
    x=x-1;

    if(x>=3)
    {
        rec(x);
    }

}

main()
{
	int x,a=1,b=1,i,c;
	printf("Enter how long you want to calculate the fibonacci series..\n");
	scanf("%d",&x);
	if(x==1)
		printf("\nFibonacci series is \n%d",a);
	else if (x==2)
		printf("\nFibonacci series is \n%d %d",a,b);
	else
	{
	    printf("\nFibonacci series is \n1 1 ");
		rec(x);
	}

}
