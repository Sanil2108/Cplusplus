#include <stdio.h>
void main(){
    int i;
    FILE *raw, *odd, *even;
    raw=fopen("raw.txt", "r");
    odd=fopen("odd.txt", "w");
    even=fopen("even.txt", "w");
    while((i = getw(raw))!=EOF){
        if(i%2==1){
            putw(i, odd);
        }else{
            putw(i, even);
        }
    }
}
