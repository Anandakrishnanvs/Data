#include<stdio.h>
#include<stdlib.h>
int maxIceCream(int* costs, int costsSize, int coins);

int main()
{

    int costs[10]={7,3,3,6,6,6,10,5,9,2};
    int costsSize=10;
    int coins=56;
    int n=maxIceCream(costs,costsSize,coins);
    printf("%d\n",n);


    return 0;
}



int maxIceCream(int* costs, int costsSize, int coins)
{
    int min=999,flag[100]={0},bal=coins,temp,count=0;
    for(int i=0;i<costsSize;i++)
    {
        for(int j=i+1;j<costsSize;j++)
        {
            if(costs[i]>costs[j])
            {
                temp = costs[i];
                costs[i]=costs[j];
                costs[j]=temp;
            }
        }
    }
   
    printf("\n");
    if(costs[0]>coins)
    {
        return 0;
    }
    for(int i=0;i<costsSize;i++)
    {
        if(bal!=0)
        {
            if(costs[i]<=bal)
            {
                bal -= costs[i];
                count++;
            }
            
        }
        
        
    }
    return count;
}