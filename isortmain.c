#include<stdio.h>
#include"isort.h"
#define LEN 50

int main(){
    int arr[LEN];
    int c = LEN;   
  
    while (c)
    {
        scanf("%d",(arr-c+50));
        c--;        
    }
    int *p = arr;
    
    insertion_sort(p , 50);
    c =0;
    while(c<49){
        printf("%d,",arr[c]);
        c++;
    }
    printf("%d",arr[c]);
     



}