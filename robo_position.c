#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
bool judgeCircle(char* moves);
int main()
{
    bool mag;
    char moves[10];
    printf("enter the moves:");
    scanf("%s",&moves);
    mag=judgeCircle(moves);
    printf("%i",mag);

    return 0;
}

bool judgeCircle(char* moves)
{
  int x=0,y=0;
  int len=strlen(moves);

  for(int i=0;i<len;i++)
  {
     if(moves[i]=='L')
     {
         x=x-1;
     }
     else if(moves[i]=='R')
     {
         x=x+1;
     }
     else if(moves[i]=='U')
     {
         y=y+1;
     }
     else if(moves[i]=='D')
     {
         y=y-1;
     }
  }
  if(x==0 && y==0)
  {
      return true;
  }
  else
  {
      return false;
  }
}
