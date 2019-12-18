#include<stdio.h>
#include<stdlib.h>
#define LEN 50

void insertion_sort(int* arr , int len);


int main(){
    int arr[LEN];
    int c = LEN;   
  
    while (c)
    {
        scanf("%d",(arr-c+50));
        c--;        
    }

    insertion_sort(arr , 50);
    int c =0;
    while(c-50){
        printf("%d,",arr[c]);
        c++;
    }
     



}

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
