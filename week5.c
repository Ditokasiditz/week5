#include<stdio.h>
#include<string.h>

int main(){
    char string[20];
    int lengh,i,c=0;

    printf("type your string:");
    scanf("%s",string);
    lengh = strlen(string);
   
    for(i=0;i<lengh;i++){
        if(string[i] != string[lengh-1-i]){
            c = 1;
            break;
        }
    }
    
    if(c==1){
        printf("not palindrome");
    }
    else{
        printf("palindrome");
    }
        
    return 0;

}