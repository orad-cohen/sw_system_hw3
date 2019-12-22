#include<stdio.h>
#include"txtfind.h"
#define WORD 30
#define LINE 256

int getLine(char s[]){
    int i = scanf("%[^\n] ",s);
    
    

   /* while (((c=getchar())!='\n')&&(c!=EOF))
    {
        *(s+i)=c;
        i++;
    }*/
    
    return i;    

}

int getword(char w[]){
    int i = 0;
    char c;
    while (((c=getchar())!='\n')&&(c!='\t')&&(c!=EOF&&c!=' ')){
        *(w+i)=c;
        i++;
    }
    *(w+i)='\0';
    
    
    
    return i;

}

int substring( char * str1, char * str2){

    int i = 0;
    int c = 0;
    while(*(str1+i)!='\0'){
        if(*(str2+c)==*(str1+i)){
            c++;
            i++;

        }
        else if(*(str2+c)=='\0'){
            return 1;
        }
        else{
            c=0;
            i++;
        }

    }
    if(*(str2+c)=='\0'){
            return 1;}
    
    return 0;


}
int similar (char *s, char *t, int n){
    
    int i = 0;
    int c = 0;
    
    while((n>=0)){
        if((*(t+c)=='\0')&&(*(s+i)=='\0')){
            return 1;
        }
        if(*(s+i)==*(t+c)){
            i++;
            c++;
        }
        else{
            i++;
            n--;
        }

    }
    return 0;

}
void printWord(char * str){
    
    char curWord[WORD]={0}; 
    while((getword(curWord))){          
             
            if(similar(curWord,str,1)){
                printf("%s\n",curWord);               
                
            }
        }
    
}

void print_lines(char * str){

    char line[LINE]={0};

     while (getLine(line)>0)
        {     
            
            if(substring(line,str)){
                printf("%s\n",line);
            }
        }     
}

