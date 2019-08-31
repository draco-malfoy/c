#include<stdio.h>
main()
{
    int a,b,c,d,gcd;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    gcd=GCD(a,b);
    printf("GCD is %d",gcd);
}

GCD(int c,int d)
{
    int m,n;
    m=c/d;
    n=c-m*d;
    if(n==0)
        return d;
    else
    {
        c=d;
        d=n;
        GCD(c,d);
    }


}
