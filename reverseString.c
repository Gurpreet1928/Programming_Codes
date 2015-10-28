#include <stdio.h>
#include <stdlib.h>
#include <string.h>
reverse(char *S)
{
 int len,i;
 len = strlen(S);

// char arr[]= NULL;
// arr = S;
 int pos =0;
 pos = len-1;
 for(i=0;i<len/2;i++)
 {
  char temp = S[i];
  S[i] = S[pos];
  S[pos] = temp;
  pos--;
  
 }
 printf("String:%s\n",S);
 //return arr;
}

int main()
{
 char s[] = "123xyz";
 reverse(s);
}

