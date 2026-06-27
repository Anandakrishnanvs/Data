#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int singleNumber(int* , int) ;
int main()
{
    int nums[1] = {-1};
    printf("%d",singleNumber(nums,1));
}



int singleNumber(int* nums, int numsSize)
{
    int result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        result ^= nums[i]; 
    }
    return result;
}