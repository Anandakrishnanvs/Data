#include<stdio.h>
#include<stdlib.h>
void incrAge(int* age);
int main()
{
    char str[100];
    FILE *f = fopen("output.txt","r");
    while(fgets(str,sizeof(str),f)!=NULL)
    {
        printf("%s\n",str);
    }

    fclose(f);
    return 0;
}
