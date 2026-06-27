#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define max 5
char a[10];
int s[max];
int top=-1,item,p;
void evaluvation();
void push(int);
int pop();
void display();
int main()
{
    printf("enter the post evaluvation:");
    scanf("%s",&a);
    evaluvation();
    return 0;
}
void evaluvation()
{
    int n,n1,n2,n3,i,r;
    for(i=0;a[i]!='\0';i++)
    {
        if(isdigit(a[i]))
        {
           n=a[i]-'0';
           push(n);
        }
        else
        {
            n1=pop();
            n2=pop();
            switch(a[i])
            {
                case '+':n3=n2+n1;
                break;
                case '-':n3=n2-n1;
                break;
                case '*':n3=n2*n1;
                break;
                case '/':n3=n2/n1;
                break;
            }
            push(n3);
        }
    }
    r=pop();
    printf("The postfix expression for %s is %d\n",a,r);
}
void push(int  item)
{
    if(top==max-1)
    {
        printf("stack is full");
    }
    else
    {
        top=top+1;
        s[top]=item;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
        return -999;
    }
    else
    {
        p=s[top];
        top--;
        return p;
    }

}

