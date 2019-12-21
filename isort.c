#include<stdio.h>
#include"isort.h"

void shift_element(int* arr, int i){
    while (i>=0){
        *(arr+i)=*(arr+i-1);
        i--;        
    }


}

void insertion_sort(int* arr , int len){    
    
    int key;
    for(int i = 1;i<len;i++){
        key = *(arr+i);
        int j = i;
        while(key<=*(arr+j-1)&&j>0){
            j--;          
            
        }
        shift_element((arr+j),i-j);
        *(arr+j)=key;
        }
}
