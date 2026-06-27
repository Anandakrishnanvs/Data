#include<stdio.h>
#include<stdlib.h>
int hourglassSum(int , int, int arr[][6]);
int main()
{
    int arr[6][6];
    int arr_rows=6;
    int arr_columns=6;
    printf("enter the array elements : \n");
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int n=hourglassSum(arr_rows, arr_columns, arr);
    printf("Sum : %d",n);
    return 0;
}
int hourglassSum(int arr_rows, int arr_columns, int arr[][6])
{
    int max=-99999,sum;
    for(int i=0; i<arr_rows-2; i++)
    {
      
      for(int j=0; j<arr_columns-2; j++)
      {
        sum=0;
           sum+=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
           if(max<sum)
           {
             max=sum;
           }
      }
      
   }
    return max;
    
}
