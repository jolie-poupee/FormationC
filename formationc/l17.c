#include<stdio.h>
int main(){
    int i=1;
    while(i<=5){
        printf("%4d",i);
        i++;
    }printf("\n");
    printf("%d\n",i);
    i=5;
    while(i>0){
        printf("%4d",i);
        i--;
    }printf("\n");
    printf("%d\n",i);
    return 0;
}