/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void countBits(int n)
{
    int rem=0,k=0,count;
    int n1;
    int *binary = malloc((n+1) * sizeof(int));
    int *num = malloc((n+1) * sizeof(int));
    num[0]=0;
    int l=1;
    for(int i=1;i<=n;i++)
    {
        n1=i;
        k=0;
        count=0;
         while(n1>0)
         {
            rem = n1 % 2;
            binary[k++]=rem;
            n1 = n1/2;
         }
         if(i==0)
         {
            printf("%d\n",0);
         }
         else
         {
                for(int j=k-1;j>=0;j--)
                {
                  if(binary[j]==1)
                  {
                    count++;
                  }
                }
         }
          num[l++]=count;
         memset(binary, 0, (n + 1) * sizeof(int)); 
    }    
    for(int i=0;i<l;i++)
    {
        printf("%d\t",num[i]);
    }


    
}
int main()
{
    int n = 5;
    countBits(n);
    return 0;
}
