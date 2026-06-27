#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int mySqrt(int );
void main()
{
    int x,n;
    printf("enter the number : ");
    scanf("%d",&x);
    n = mySqrt(x);
    printf("Sqrt of %d : %d ",x,n);
}


int mySqrt(int x)
{
    int num[x];
    for(int i=0;i<=x/2;i++)
    {
       num[i]=pow(i,2);
    }    
    for(int i=0;i<=x/2;i++)
    {
        if(x==num[i]) return i;
    }
    for(int i=0;i<=x/2;i++)
    {
        if(num[i]< x && x < num[i+1])
        {
            return i;
        }
    }
    return -1;
}
