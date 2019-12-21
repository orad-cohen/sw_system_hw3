#include<stdio.h>
#include"txtfind.h"
#define WORD 30
#define LINE 256


int main(){
    char c[2];
    char word[WORD]={0};
    char curWord[WORD]={0};    
    char line[LINE]={0};   

    getword(word);
    getword(c);
    getchar();
    if(c[0] == 'a'){        
        while((getword(curWord))){          
             
            if(similar(curWord,word,1)){
                printf("\n%s",curWord);               
                
            }
        }

    }
    else if(c[0]=='b'){
        while (getLine(line))
        {
            
            
            if(substring(line,word)){
                printf("\n%s",line);
            }
        }       

    }
    else{
        printf("Error: Invalid input.");
    }  
    

    


}