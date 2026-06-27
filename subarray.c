#include<stdio.h>
#include<stdlib.h>
int countMajoritySubarrays(int* nums, int numsSize, int target);
int main()
{
    int nums[2]={5,4};
    int target=1;
    int n = countMajoritySubarrays(nums, 4, target);
    printf("%d",n);
    return 0;
}
int countMajoritySubarrays(int* nums, int numsSize, int target)
{
    int count=0;
    
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<=numsSize;j++)
        {
            int targetCount=0;
            for(int k=i;k<j;k++)
            {
               if(nums[k]==target )
               {
                  targetCount++;
               }
            }
            if(targetCount > (j - i) / 2)
            {
                count++;
            }
        }
    }
    return count;
}