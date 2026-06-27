int searchInsert(int* nums, int numsSize, int target)
{
    int k;
    int low=0;
    int high=numsSize-1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            k=i;
            return k;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>target)
        {
            k=i;
            return k;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<target)
        {
            k=i+1;
        
        }
    }
    return k;
}
