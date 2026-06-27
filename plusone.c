/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void plusOne(int* , int );

int main()
{
     int digitsSize;
     printf("Enter the DigitSize :");
     scanf("%d",&digitsSize);
     int digits[digitsSize];
     printf("enter the digits :");
     for(int i=0;i<digitsSize;i++)
     {
        scanf("%d",&digits[i]);
     }
     int *returnSize = malloc(sizeof(int));
     plusOne(digits, digitsSize);
    
        
    return 0;

}
void  plusOne(int* digits, int digitsSize)
{
    
    int carry[digitsSize+1];
    int result[digitsSize+1];
    memset(carry,0,sizeof(carry));
    int n =  digits[digitsSize-1];
    int k=0,l=1,flag=0,last=1;
    
        for(int i=digitsSize-1;i>=0;i--)
        {
            n=digits[i];
            if(digits[digitsSize-1]!=9 && flag==0)
            {
                result[k++] = digits[digitsSize-1] + 1 ;
                flag=1;
                last=0;
                continue;
            }
            if(n==9 && !last)
            {
                result[k++] = n + carry[k+1];
                carry[l++]=1;
                continue;
            }
            else if(n==9)
            {
                last=0;
                result[k]=0 + carry[k+1];
                carry[l++]=1;
                k++;
            }
            else
            {
                result[k]= n + carry[k];
                k++;
            }
        }
        if(digits[0]==9 && digits[digitsSize-1]==9)
        {
            result[k]=carry[k];
        }
        else
        {
            k=k-1;
        }
        int a=0;
        for(int i=k;i>=0;i--)
        {
            printf("%d\t",result[i]);
        }
    
    
}