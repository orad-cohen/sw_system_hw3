#include<stdio.h>
#include"txtfind.h"
#define WORD 30



int main(){
    char c;
    char word[WORD]={0};       

    scanf("%s",word);
   
    
    scanf(" %c ",&c);
    scanf(" ");
    
    
    if(c == 'a'){    
        printWord(word);        

    }
    else if(c=='b'){
        print_lines(word);         

    }
    else{
        printf("Error: Invalid input.");
    }  
    

    


}