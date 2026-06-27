#include<stdio.h>
#include<stdlib.h>
int hammingWeight(int n);
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int num=hammingWeight(n);
    printf("%d\n",num);

    return 0;
}
int hammingWeight(int n)
{
    int* a = malloc(32 * sizeof(int));
    int rem,k=0,count=0;

    while(n>0)
    {
        rem = n%2;
        a[k++]=rem;
        n = n /2;
    }
    for(int i=k-1;i>=0;i--)
    {
        if(a[i]==1)
        {
            count++;
        }
    }
    return count;
}