#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q){
    *p+=*q;
    *q=*p-*q;
    *p=*p-*q;
}

int* sort(int *p, int n){
    int i=0, j;
    for(;i<n;i++){
        for(j=i;j<n;j++){
            if(*(p+j)<*(p+i)){
                //swap
                swap((p+j), (p+i));
            }
        }
    }
    return p;
}

int fn(int *p){
    return 0;
}

int main()
{
    int i=0, arr[]={810, 3, 1, 5, 2, 0}, *p, (*fptr)();
    fptr=sort();
    p=arr;
    p=fptr(p, 5);
    for(;i<5;i++){
        printf("%d\n", *(p+i));
    }
    return 0;
}
