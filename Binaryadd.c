#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void addBinary(char* , char*);
int main()
{
   char a[10],b[10],c[10];
   printf("enter the first binary: ");
   scanf("%s",&a);
   printf("enter the second binary: ");
   scanf("%s",&b);
   addBinary(a,b);
   return 0;
}
int  convert(char *a)
{
    int k=0,sum=0;
    int l=strlen(a);
    for(int i=l-1;i>=0;i--)
    {
       sum = sum + ( (a[i]-'0') * pow(2,k) );
       k++;
    }
    return sum;
}
void converttoBinary(int num)
{
    char r[10];
    int k=0;
    while(num!=0)
    {
        int rem = num%2;
        r[k++] = rem + '0';
        num = num/2;
    }
    r[k]='\0';
    printf("%s",strrev(r));
}
void addBinary(char* a, char* b) 
{
    int n1 = convert(a);
    int n2 = convert(b);
    int n3 = n1+n2;
    converttoBinary(n3);
    
    
}
