char* longestCommonPrefix(char** strs, int strsSize)
{
     if(strsSize==0)
        return "";
     static char prefix[1024];
     strcpy(prefix,strs[0]);
     for(int i=1;i<strsSize;i++)
     {
         int j=0;
         while(prefix[j]!='\0' && j<strlen(strs[i]) && prefix[j]==strs[i][j])
         {
            j++;
         }
         prefix[j]='\0';
     }   
     return prefix;
}
