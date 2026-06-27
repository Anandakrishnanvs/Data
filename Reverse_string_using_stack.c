#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 10
void push (char);
int pop();
void display();
char s[max];
int top=-1;
char item;
int main()
{
    char a[100];
    printf("enter the string:");
    scanf("%s",&a);

    reverse(a);


}
void reverse(char *a)
{
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        push(a[i]);
    }
    display();


}


void push(char item)
{
    if(top==max-1)
    {
        printf("stack is full\n");
    }
    else
    {
       top++;
       s[top]=item;
    }
}



void display()
{
    int i;
    printf("Tha reversed is\n");
    if(top==-1)
    {
        printf("empty!!!");
        exit(0);
    }
    for(i=top;i>=0;i--)
    {
      printf("%c",s[i]);
    }
}
