#include <stdio.h>
#include <string.h>
 
int checkpalindrome(char *str, int l, int r){
     if(NULL == str || l < 0 || r < 0){
         return 0;
     }
     if(l >= r)
         {
             return 1;
         }
     if(str[l] == str[r]){
         return checkpalindrome(str, l + 1, r - 1);
     }
     return 0;
 }
 
int main()
{
    char s[20]; 
    int i=0;
    scanf("%s",s);
     
    if(checkpalindrome(s,i,strlen(s) - 1))
         printf("palindrome");
    else
        printf("not palindrome");
 
 }