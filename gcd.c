#include<stdio.h>
main()
{
    int a,b,c,res=0,bin,i,j=0;
    printf("Enter a decimal number:");
    scanf("%d",&a);
    do{
        b=a/2;
        c=a%2;
        a=b;
        for(i=j;i<=j;i++)
        {
            bin=c*pow(10,i);
            res=res+bin;
        }
                j++;

    }while(b!=0);

  printf("Binanry equi is %d",res);
}
