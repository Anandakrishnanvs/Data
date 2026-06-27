
#include <stdio.h>
int alternateDigitSum(int n)
{
    int rem=0,rev=0;
    while(n>0)
    {
        rem = n%10;
        rev =  rev * 10 +rem;
        n = n/10;
    }
    return rev;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum = alternateDigitSum(n);
    printf("The alternate digit sum is : %d\n",sum);
    return 0;
}