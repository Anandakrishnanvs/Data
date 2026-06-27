int lengthOfLastWord(char* s)
{
    int len=strlen(s)-1;
    int i=len,count=0;
    while(i >= 0 && s[i] == ' ')  // Count non-space characters
    {
        i--;
    }
    while(i >= 0 && s[i] != ' ')
    {
        count++;
        i--;
    }
     
    return count;
}
