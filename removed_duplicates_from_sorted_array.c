#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter the number of elements:");
    scanf("%d",&num);
    printf("enter the elements:");
    int nums[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&nums[i]);
    }

    int c=0,k=0;
    int n=sizeof(nums)/sizeof(nums[0]);
    int dnums[n];
    memset(dnums,-1,sizeof(dnums));
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(nums[i]==dnums[j])
            {
              c=1;
            }
        }
        if(c==0)
        {
            dnums[k++]=nums[i];
        }
    }
    int rdnums[k-1];
    for(int i=0;i<k;i++)
    {
        rdnums[i]=dnums[i];
    }
    for(int i=0;i<k;i++)
    {
        printf("%d\t",rdnums[i]);
    }

    return 0;
}
